void insertEdge(int from,int to,int cap){//插入边
    graph[from].push_back(edges.size());
    edges.push_back(Edge(from,to,cap,0));
    graph[to].push_back(edges.size());
    edges.push_back(Edge(to,from,0,0));
}
int a[MAX],p[MAX];//a数组表示源点到结点a[i]的残量,p数组表示最短路树上到达结点p[i]的边在edges数组中的序号
int MaxFlow(int s,int t){//最大流算法,s为源点,t为汇点
    int flow=0;//最大流量
    while(true){
        memset(a,0,sizeof(a));//将源点到达每个结点的残量初始化为0
        //广度优先遍历查找从源点到达汇点的增广路
        queue<int>q;
        q.push(s);
        a[s]=INT_MAX;//起点的残量置为无穷大
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(int i:graph[x]){//遍历以x为起点的边
                Edge&e=edges[i];
                if(a[e.to]==0&&e.cap>e.flow){//当前边的终点的残量为0且容量大于流量
                    p[e.to]=i;//更新到达该终点的边的编号
                    a[e.to]=min(a[x],e.cap-e.flow);//更新源点到该终点的残量
                    q.push(e.to);//压入队列
                }
            }
            if(a[t]!=0)//终点的残量不为零，跳出循环
                break;
        }
        if(a[t]==0)//终点的残量为零，表示不存在增广路了，跳出外层死循环
            break;
        for(int u=t;u!=s;u=edges[p[u]].from){//从汇点向前遍历增广路经，更新每条增广路的流量
            edges[p[u]].flow+=a[t];
            edges[p[u]^1].flow-=a[t];
        }
        flow+=a[t];//增加最大流量
    }
    return flow;
}
//如果想要求解边上的流量，最好提前将边在edges数组中的编号存储起来，待Edmonds-Karp算法执行完毕后，通过编号访问edges数组对应元素的flow成员即可。
