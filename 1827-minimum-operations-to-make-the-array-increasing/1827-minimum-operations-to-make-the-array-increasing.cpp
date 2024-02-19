class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<=nums.size()-1;i++){
            if(nums[i-1]>=nums[i]) {
                cnt+=(nums[i-1]-nums[i])+1;
                nums[i]+=(nums[i-1]-nums[i])+1;
            }
        }
        return cnt;
    }
};