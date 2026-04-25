class Solution {
public:
  void dfs(vector<vector<char>>& grid, vector<vector<int>>&vis, int i, int j){
    if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j] == '0'||vis[i][j] == 1) return ;
    vis[i][j] = 1;
   dfs(grid, vis, i, j-1);
   dfs(grid, vis, i-1,j);
   dfs(grid, vis, i, j+1);
   dfs(grid, vis, i+1, j);
  }    
public:
    int numIslands(vector<vector<char>>& grid) {
       int n = grid.size();
       int m = grid[0].size();
       int cnt = 0;
       vector<vector<int>>vis(n,vector<int>(m,0));
       for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j]&&grid[i][j] =='1'){
                dfs(grid, vis,i, j);
                cnt++;
            }
         }
       }
       return cnt;
    }
};
