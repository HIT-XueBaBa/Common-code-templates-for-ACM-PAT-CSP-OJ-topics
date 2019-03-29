//无权图单源最短路的BFS算法的边除首尾结点外，边不包含其他信息，不需要使用上面的存储结构，graph[i]中存储的直接是i号结点能到达的结点编号
vector<int>graph[MAX];//graph[i][j]表示结点i能到达的第j个结点编号
void BFS(int vstart){
    queue<int>q;
    memset(inQueue,0,sizeof(inQueue));
    fill(dis,dis+MAX,INT_MAX);
    dis[vstart]=0;
    q.push(vstart);
    inQueue[vstart]=true;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(int i:graph[p]){
            if(!inQueue[i]){
                q.push(i);
                dis[i]=dis[p]+1;
                inQueue[i]=true;
            }
        }
    }
}
