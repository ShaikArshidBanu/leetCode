class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi_element=*max_element(nums.begin(),nums.end());
        int m=maxi_element;
        int sum=maxi_element;
        for(int i=1;i<k;i++){
            sum+=m+1;
            m+=1;
        }
        return sum;
    }
};