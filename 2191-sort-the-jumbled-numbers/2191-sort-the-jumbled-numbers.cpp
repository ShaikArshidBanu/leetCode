class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
      map<long long,vector<int>>mp;
        for(auto num:nums){
            if(num==0){
                  mp[mapping[num]].push_back(num);
                continue;
            }
            int n=num;
            int new_num=0,factor=1;
            while(num){
                int temp=mapping[num%10];
                new_num+=temp*factor;
                factor*=10;
                num/=10;
            }
            mp[new_num].push_back(n);
        }
        vector<int>ans;
        for(auto i:mp){
            for(auto it:i.second){
                ans.push_back(it);
            }
        }
        return ans;
    }
};
