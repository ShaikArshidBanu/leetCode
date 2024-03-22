class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            vector<int>v;
            while(nums[i]){
               v.push_back(nums[i]%10);
                nums[i]/=10;
            }
            reverse(v.begin(),v.end());
            for(auto &it:v){
            ans.push_back(it);
            }
        }
        return ans;
    }
};