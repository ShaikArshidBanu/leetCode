class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int ans=0;
        int n=nums.size(),sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(nums[n-1]==n) ans=((n*(n+1))/2)-sum;
        else ans=n;
        return ans;
    }
};