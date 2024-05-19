class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size()-1;i++){
            int element=prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(element>=prices[j]) {
                    element-=prices[j];
                    break;
                }
                else continue;
            }
            ans.push_back(element);
        }
        ans.push_back(prices[prices.size()-1]);
        return ans;
    }
};