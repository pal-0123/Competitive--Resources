void dfs(int node){
	vis[node]=1;
	for (int child:graph[node]){
		if (!vis[child]){
			dfs[child];
		}
	}
}