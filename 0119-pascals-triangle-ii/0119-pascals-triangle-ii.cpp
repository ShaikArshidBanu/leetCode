class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<vector<int>>dp(n+1,vector<int>(n+1,1));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }
        return dp[n];
    }
};