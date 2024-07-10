class Solution {
    int f(int i,vector<int>nums){
        int p2=nums[0];
        if(i==1) return p2;
        int p1=max(nums[0],nums[1]);
        for(int j=2;j<=i-1;j++){
            int x=nums[j]+p2;
            int y=p1;
            int cur=max(x,y);
            p2=p1;
            p1=cur; 
        }
        return p1;
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>nums1(n-1);
        vector<int>nums2(n-1);
        
        for(int i=0;i<=n-2;i++){
            nums1[i]=nums[i];
            nums2[i]=nums[i+1];
        }
        if(n==1) return nums[0];
        int x=f(n-1,nums1);
        int y=f(n-1,nums2);
        return max(x,y);
    }
};