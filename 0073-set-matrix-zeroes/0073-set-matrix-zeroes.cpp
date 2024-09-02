class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0)   q.push({i,j});
            }
        }
        while(!q.empty()){
            auto x=q.front();
            int row=x.first;
            int col=x.second;
            q.pop();
            for(int k=0;k<m;k++){
            matrix[k][col]=0;
            }
           for(int l=0;l<n;l++){
            matrix[row][l]=0;
             }
            
        }
    }
};