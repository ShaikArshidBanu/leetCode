class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=size(nums);
        for(int i=0;i<n;i++){
            int x=nums[i];
            while(x>=1 && x<=n && nums[x-1]!=x && nums[i]!=i+1){
                swap(nums[x-1],nums[i]);
                x=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==i+1) continue;
              return i+1;
        }
        return n+1;
    }
};