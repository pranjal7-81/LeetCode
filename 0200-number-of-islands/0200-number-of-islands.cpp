class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<bool>>& vis,int m,int n){
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==1 || grid[i][j]!='1') return;


        vis[i][j] = 1;
        dfs(i,j-1,grid,vis,m,n);
        dfs(i-1,j,grid,vis,m,n);
        dfs(i+1,j,grid,vis,m,n);
        dfs(i,j+1,grid,vis,m,n);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    dfs(i,j,grid,vis,m,n);
                    islands++;
                }

            }
        }
        return islands;

    }};