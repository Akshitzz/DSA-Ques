class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>> q;

        // Push boundary 1's
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || j == 0 || i == n-1 || j == m-1) {
                    if(grid[i][j] == 1) {
                        q.push({i, j});
                        vis[i][j] = 1;
                    }
                }
            }
        }

        // Directions
        int nrow[] = {-1, 0, 1, 0};
        int ncol[] = {0, 1, 0, -1};

        // BFS
        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int k = 0; k < 4; k++) {
                int newRow = row + nrow[k];
                int newCol = col + ncol[k];

                if(newRow >= 0 && newRow < n &&
                   newCol >= 0 && newCol < m &&
                   grid[newRow][newCol] == 1 &&
                   vis[newRow][newCol] == 0) 
                {
                    q.push({newRow, newCol});
                    vis[newRow][newCol] = 1;
                }
            }
        }

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 && vis[i][j] == 0) cnt++;
            }
        }

        return cnt;
    }
};