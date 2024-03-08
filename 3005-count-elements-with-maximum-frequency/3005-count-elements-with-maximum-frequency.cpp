class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max_element=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            max_element=std::max(max_element,mp[nums[i]]);
        }
        int freq=0;
        for(auto& it:mp){
            int maxi=it.second;
            if(maxi==max_element) freq++;
        }
       
        return max_element*freq;
    }
};