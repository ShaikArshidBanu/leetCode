class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0,sum=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]==0?-1:1;
            if(mp.find(sum)==mp.end()) mp[sum]=i;
            ans=max(ans,i-mp[sum]);
            }
        return ans;
    }
};