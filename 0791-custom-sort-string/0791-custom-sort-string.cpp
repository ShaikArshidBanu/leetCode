class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        string ans="";
        for(char i:order){
            while(mp[i]!=0){
            ans+=i;
            mp[i]--;
                }
        }
        for(auto i:mp){
            while(i.second!=0){
                ans+=i.first;
                i.second--;
            }
        }
        return ans;
    }
};