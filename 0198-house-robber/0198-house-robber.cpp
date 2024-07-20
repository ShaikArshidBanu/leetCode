class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2=nums[0];
        if(nums.size()==1) return prev2;
        int prev1=max(prev2,nums[1]);
        for(int i=2;i<nums.size();i++){
            int left=nums[i]+prev2;
            int right=prev1;
            int cur=max(left,right);
            prev2=prev1;
            prev1=cur;
        }
       return prev1; 
    }
};