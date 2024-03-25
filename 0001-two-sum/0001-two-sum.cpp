class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            int required=target-current;
            if(mp.find(required)!=mp.end()) return {i,mp[required]};
            mp[current]=i;
        }
        return {-1};
    }
};