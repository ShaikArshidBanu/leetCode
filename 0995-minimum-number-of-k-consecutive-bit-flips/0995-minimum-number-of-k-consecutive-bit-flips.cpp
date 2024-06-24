class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>flips(n,0);
        int flip_count=0,result=0;
        for(int i=0;i<n;i++){
            if(i>=k) flip_count^=flips[i-k];
            if((nums[i]^flip_count)==0){
                if(i+k>n){
                    return -1;
                }
                flip_count^=1;
                result++;
                flips[i]=1;
            }
        }
        return result;
    }
};