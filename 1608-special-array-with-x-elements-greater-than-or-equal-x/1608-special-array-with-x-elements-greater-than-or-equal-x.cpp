class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
           int ans=0;
            for(int j=nums.size()-1;j>=0;j--){
                if(nums[j]>=i) ans++;
                else   break; 
               }
               if(ans==i) {
                 return i;
            }

        }
        return -1;
    }
};

 