class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       map<int,int>mp;
        for(auto k:nums){
            mp[k]++;
        }
        for(auto i:mp){
            if(i.second>1) return i.first;
        }
        return -1;
    }
};