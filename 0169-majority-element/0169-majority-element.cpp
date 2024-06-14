class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        int k=nums.size()/2;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto it:mp){
            if(it.second>k) ans=it.first;
        }
        return ans;
    }
};