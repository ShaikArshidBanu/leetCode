class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digitSum=0;
        int element_sum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10) digitSum+=nums[i];
            else{
                while(nums[i]!=0){
                    digitSum+=nums[i]%10;
                    nums[i]/=10;
                }
            }
        }
        return abs(element_sum-digitSum);
    }
};