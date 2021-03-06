存在欧拉路径的度数要求：
 - 对于无向图：不存在度数为奇数的结点，则存在欧拉回路，可以从任意结点出发；存在两个度数为奇数的结点，则存在欧拉环游，且必须从其中一个奇点出发，另一个奇点终止。
 - 对于有向图：不存在入度不等于出度的结点，则存在欧拉回路，可以从任意结点出发；存在两个入度不等于出度的结点，且一个点入度比出度小1，一个点入度比出度大1，则存在欧拉环游，且必须从入度比出度小1的结点出发，入度比出度大1的结点终止。

判断是否存在欧拉路径必须满足以下两个条件：
1. 图必须连通
2. 满足上述度数要求

求出欧拉序列可以用DFS算法实现，且在求出欧拉序列的同时可以判断图是否连通。假设有m条边，则判断图是否连通的语句是`欧拉序列的包含的结点个数==m+1`
