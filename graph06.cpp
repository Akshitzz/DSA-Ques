//  surrounded regions
class Solution {
  public:

    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        int n = grid.size();
        int m = grid[0].size();

        vis[r][c] = 1;

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        for(int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr >= 0 && nr < n && nc >= 0 && nc < m &&
               grid[nr][nc] == 'O' && !vis[nr][nc]) {
                dfs(nr, nc, grid, vis);
            }
        }
    }

    void fill(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        // Step 1: Mark all O's connected to border
        for(int j = 0; j < m; j++) {
            if(grid[0][j] == 'O' && !vis[0][j]) dfs(0, j, grid, vis);
            if(grid[n-1][j] == 'O' && !vis[n-1][j]) dfs(n-1, j, grid, vis);
        }

        for(int i = 0; i < n; i++) {
            if(grid[i][0] == 'O' && !vis[i][0]) dfs(i, 0, grid, vis);
            if(grid[i][m-1] == 'O' && !vis[i][m-1]) dfs(i, m-1, grid, vis);
        }

        // Step 2: Convert unvisited O to X
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 'O' && !vis[i][j]) {
                    grid[i][j] = 'X';
                }
            }
        }
    }
};
