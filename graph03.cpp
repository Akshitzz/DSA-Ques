class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int> bfs;
        int n = adj.size();
        int vis[n]={0};
        vis[0]=1;
        queue <int> q;
        q.push(0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
           bfs.push_back(node);
           for(auto it :adj[node]){
               if(!vis[it]){
                   vis[it]=1;
                   q.push(it);
               }
           }
        }
        return bfs;
    }
};