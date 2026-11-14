class Solution {
public:
    void dfs(vector<vector<int>>& image,int i,int j,int newColor,int OrgColor){
        int n = image.size(); //row
        int m = image[0].size(); //col

        
        if(i<0 || j<0 || i>=n || j>=m || image[i][j]!=OrgColor || image[i][j]==newColor) return;
        image[i][j] = newColor;
        dfs(image,i+1,j,newColor,OrgColor);
        dfs(image,i-1,j,newColor,OrgColor);
        dfs(image,i,j-1,newColor,OrgColor);
        dfs(image,i,j+1,newColor,OrgColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(); //row
        int m = image[0].size(); //col
        
        vector<vector<int>>vis(image.size(),vector<int>(image[0].size(),0));
        int temp = image[sr][sc];
        if(image[sr][sc]==temp){
            dfs(image,sr,sc,color,temp);
        }
        return image;

    }
};