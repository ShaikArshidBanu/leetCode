class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int current=nums[i];
            int required=target-current;
            if(mp.find(required)!=mp.end()) return {i,mp[required]};
            mp[current]=i;
        }
        return {-1};
    }
};