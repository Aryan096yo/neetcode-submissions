class Solution {
public:
    void dfs(vector<vector<int>>&heights, vector<vector<int>>&vis, int i, int j, int n, int m){
        vis[i][j] = 1;
        int dx[4] = {0,-1,0,1};
        int dy[4] = {-1,0,1,0};
        for(int d = 0; d < 4; d++){
            int ni = i + dx[d];
            int nj = j + dy[d];
        if(ni>=0&&ni<n&&nj>=0&&nj<m&&!vis[ni][nj]&&heights[ni][nj]>=heights[i][j]){
            dfs(heights, vis, ni, nj, n, m);
         }
        }
        }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>> pacific(n, vector<int>(m, 0));
        vector<vector<int>> atlantic(n, vector<int>(m, 0));
        
        //top row
        for(int j = 0; j < m; j++){
           dfs(heights, pacific, 0, j, n , m);
        }
        for(int i = 0; i < n; i++){
            dfs(heights, pacific, i, 0, n, m);
        }
        for(int i = 0 ; i < n ; i++){
            dfs(heights, atlantic, i, m-1, n, m);
        }
        for(int j = 0; j < m; j++){
            dfs(heights, atlantic, n-1, j,n,m);
        }
        vector<vector<int>>res;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ;j++){
                if(pacific[i][j] && atlantic[i][j]){
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }
};
