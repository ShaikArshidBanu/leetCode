class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int j=nums[0]+1;
    for(int i=1;i<nums.size();i++){
        if(j>=nums[i]) ans+=(j++ - nums[i]);
        else j=nums[i]+1;
    }
         return ans;
    }
};