class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>& grid,vector<vector<int>>&visited){
        int m=grid.size();
        int n=grid[0].size();
        visited[r][c]=1;
        if(r>0 && grid[r-1][c]==1 && !visited[r-1][c]){
            dfs(r-1,c,grid,visited);
        }
        if(r+1<m && grid[r+1][c]==1 && !visited[r+1][c]){
            dfs(r+1,c,grid,visited);
        }
        if(c>0 && grid[r][c-1]==1 && !visited[r][c-1]){
            dfs(r,c-1,grid,visited);
        }
        if(c+1<n && grid[r][c+1]==1 && !visited[r][c+1]){
            dfs(r,c+1,grid,visited);
        }
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            if(grid[i][0]==1 && !visited[i][0]) dfs(i,0,grid,visited);
            if(grid[i][n-1]==1 && !visited[i][n-1]) dfs(i,n-1,grid,visited);
        }
        for(int j=0;j<n;j++){
            if(grid[0][j]==1 && !visited[0][j]) dfs(0,j,grid,visited);
            if(grid[m-1][j]==1 && !visited[m-1][j]) dfs(m-1,j,grid,visited);
        }
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(grid[i][j]==1 && !visited[i][j]) ans++;
            }
        }
        return ans;
    }
};