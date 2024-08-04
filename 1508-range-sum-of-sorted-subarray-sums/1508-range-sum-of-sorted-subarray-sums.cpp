class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod=1e9+7;
        vector<int>arr;
        arr.reserve(n*(n+1)/2);
        for(int i=0;i<nums.size();i++){
           int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                arr.push_back(sum);
            }
        }
        sort(arr.begin(),arr.end());
        long long ans=accumulate(arr.begin()+left-1, arr.begin()+right, 0LL)%mod;
        return ans;
    }
};