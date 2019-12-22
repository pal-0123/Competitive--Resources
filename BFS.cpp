void bfs(int source){
	queue <int> q;
	vis[source]=1;
	q.push(source);
	level[source]=0;
	while (!q.empty()){
		int parent=q.front();
		q.pop();
		for (int child:graph[parent]){
			if (!vis[child]){
				vis[child]=1;
				q.push(child);
				level[child]=level[parent]+1;
			}
		}
	}
}