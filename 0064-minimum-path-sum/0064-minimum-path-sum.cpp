class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>prev(n);
        vector<int>cur(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) cur[j]=grid[0][0];
                else{
                    int right=INT_MAX,down=INT_MAX;
                    if(j>0) right=cur[j-1];
                    if(i>0) down=prev[j];
                    cur[j]=grid[i][j]+min(right,down);
                }
            }
            prev=cur;
        }
        return cur[n-1];
    }
};