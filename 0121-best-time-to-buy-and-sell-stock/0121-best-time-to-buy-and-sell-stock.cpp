class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],maxi=0,profit=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            profit=prices[i]-mini;
            maxi=max(maxi,profit);
        }
        return maxi;
    }
};