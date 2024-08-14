class Solution {
public:
    void dfs(int i,int j,int startColor,int color,vector<vector<int>>& image){
        int m=image.size();
        int n=image[0].size();
        image[i][j]=color;
        if(i>0 && image[i-1][j]==startColor) dfs(i-1,j,startColor,color,image);
        if(i+1<m && image[i+1][j]==startColor) dfs(i+1,j,startColor,color,image);
        if(j>0 && image[i][j-1]==startColor) dfs(i,j-1,startColor,color,image);
        if(j+1<n && image[i][j+1]==startColor) dfs(i, j+1,startColor,color,image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int startColor=image[sr][sc];
        if(startColor==color) return image;
        dfs(sr,sc,startColor,color,image);
        return image;
    }
};