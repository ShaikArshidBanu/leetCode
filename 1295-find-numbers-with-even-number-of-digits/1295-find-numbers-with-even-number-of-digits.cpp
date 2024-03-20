class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            while(nums[i]>=1){
                cnt++;
                nums[i]/=10;
            }
            mp[i]=cnt;
        }
        for(auto& it:mp){
            if((it.second)%2==0)ans++;
        }
        return ans;
    }
};