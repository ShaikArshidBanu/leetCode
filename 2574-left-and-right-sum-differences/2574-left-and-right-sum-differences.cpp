class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int left[nums.size()];
        int right[nums.size()];
        vector<int> ans;
        left[0]=0;
        right[nums.size()-1]=0;
        for(int i=1;i<nums.size();i++){
            left[i]=left[i-1]+nums[i-1];
        }
         for(int i=nums.size()-2;i>=0;i--){
            right[i]=right[i+1]+nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
    }
};