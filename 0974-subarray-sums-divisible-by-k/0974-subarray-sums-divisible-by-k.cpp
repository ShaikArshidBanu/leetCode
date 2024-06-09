class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0,prefix_sum=0;
        unordered_map<int,int>prefixMap;
        prefixMap[0]=1;
        for(int num:nums){
            prefix_sum+=num;
            int mod=prefix_sum%k;
            if(mod<0) mod+=k;
            if(prefixMap.find(mod)!=prefixMap.end()){
                count+=prefixMap[mod];
                prefixMap[mod]+=1;
            } 
            else prefixMap[mod]=1;
        }
        return count;
    }
};