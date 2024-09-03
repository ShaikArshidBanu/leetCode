class Solution {
public:
    void solve(int i,vector<vector<int>>& ans, int n){
        vector<int>cur;
        if(i==0) cur.push_back(1);
        else if(i==1){
            cur.push_back(1);
            cur.push_back(1);
        }
        else{
            cur.push_back(1);
            for(int k=1;k<i;k++){
                cur.push_back(ans[i-1][k-1]+ans[i-1][k]);
            }
            cur.push_back(1);
        }
        ans.push_back(cur);
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            solve(i,ans,numRows);
        }
        return ans;
    }
};