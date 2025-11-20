class Solution {
  private:
    
    void dfsTraversal(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& result) {
        vis[node] = 1;
        result.push_back(node);    
       
        for (auto neighbor : adj[node]) {
            if (!vis[neighbor]) {
                dfsTraversal(neighbor, adj, vis, result);
            }
        }
    }

  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();           
        vector<int> vis(n, 0);       
        vector<int> result;          
    
        dfsTraversal(0, adj, vis, result);

        return result;
    }
};
