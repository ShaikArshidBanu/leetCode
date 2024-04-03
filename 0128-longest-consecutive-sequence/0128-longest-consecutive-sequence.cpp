class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt=1,ans=1;
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i]-nums[i-1]==1) cnt++;
            else{
                ans=max(ans,cnt);
                cnt=1;
            }
        }
        return max(cnt,ans);
    }
};