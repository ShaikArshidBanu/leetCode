class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        auto compare=[&](int a,int b){
            if(mp[a]==mp[b]) return a>b;
            return mp[a]<mp[b];
        };
        sort(nums.begin(),nums.end(),compare);
        return nums;
    }
};