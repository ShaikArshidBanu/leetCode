class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
      sort(nums.begin(),nums.end());  
      int ans=0;
      if(nums.size()==1 || nums.size()==2) return -1;
      else {
          int s=0,e=nums.size()-1;
          ans=nums[((s)+(e-s)/2)];
      }
      return ans;
    }
};