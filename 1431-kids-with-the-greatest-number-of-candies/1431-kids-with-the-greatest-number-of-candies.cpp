class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maximumcandies=0;
        for(int i=0;i<candies.size();i++){
            maximumcandies=max(maximumcandies,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
           if(candies[i]+extraCandies>=maximumcandies){
               ans.push_back(true);
           }
           else ans.push_back(false);
        }
        return ans;
    }
};