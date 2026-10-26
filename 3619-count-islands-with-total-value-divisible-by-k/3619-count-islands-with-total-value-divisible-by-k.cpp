class Solution {
public:
    long long DFS(int i,int j,vector<vector<int>>& grid,int m , int n){
        m = grid.size();
        n = grid[0].size();
        long long sum = grid[i][j];
        grid[i][j] = 0;
        vector<pair<int,int>>directions = {{0,-1},{0,1},{1,0},{-1,0}};
        for(auto dir : directions){
            int i_new = i + dir.first;
            int j_new = j + dir.second;
            if(i_new>=0 && i_new<m && j_new>=0 && j_new<n && grid[i_new][j_new]>0){
                sum+=DFS(i_new,j_new,grid,m,n);
            }
        }
        return sum;

    }
    
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    long long sum = DFS(i,j,grid,m,n);
                    if(sum % k == 0){
                        count++;
                    }
                }
                
            }
        }
        return count;
    }
};