class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int prefixSum=0,count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0) prefixSum++;
            if(mp.find(prefixSum-k)!=mp.end()) count+=mp[prefixSum-k];
            mp[prefixSum]++;
        }
        return count;
    }
};