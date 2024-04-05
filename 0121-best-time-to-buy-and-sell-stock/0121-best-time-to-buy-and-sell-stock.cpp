class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int mini=prices[0],maxi=0,profit=0;
        for(int i:prices){
            mini=min(mini,i);
            profit=i-mini;
            maxi=max(maxi,profit);
        }
        return maxi;
    }
};