class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>cost;
        for(int i=0;i<s.size();i++){
            cost.push_back(abs(s[i]-t[i]));
        }
        int maxSize=0,subSize=0,i=0,changeCost=0;
        while(i<cost.size()){
            if(changeCost+cost[i]<=maxCost){
                changeCost+=cost[i];
                subSize++;
                maxSize=max(maxSize,subSize);
            } else{
                changeCost+=cost[i]-cost[i-subSize];
            }
            i++;
        }
        return maxSize;
    }
};