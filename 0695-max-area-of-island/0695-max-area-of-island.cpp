class Solution {
public:
    void dfs(int r,int c,int &count,vector<vector<int>>&visited,vector<vector<int>>&grid){
        int m=grid.size();
        int n=grid[0].size();
        visited[r][c]=1;
        count++;
        if(r>0 && grid[r-1][c]==1 && !visited[r-1][c]){
            dfs(r-1,c,count,visited,grid);
        }
        if(r+1<m && grid[r+1][c]==1 && !visited[r+1][c]){
             dfs(r+1,c,count,visited,grid);
        }
        if(c>0 && grid[r][c-1]==1 && !visited[r][c-1]){
            dfs(r,c-1,count,visited,grid);
        }
        if(c+1<n && grid[r][c+1]==1 && !visited[r][c+1]){
            dfs(r,c+1,count,visited,grid);
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int answer=0;
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    int count=0;
                    dfs(i,j,count,visited,grid);
                    answer=max(answer,count);
                }
            }
        }
        return answer;
    }
};