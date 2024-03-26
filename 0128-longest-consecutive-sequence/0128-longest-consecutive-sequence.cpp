class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int ans=1,res=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) continue;
            else if(nums[i]-nums[i-1]==1) ans++;
            else {
                res=max(ans,res);
                ans=1;
            }
        }
        return max(ans,res);
    }
};