class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,string>mp;
        string ans;
        for(int i=0;i<indices.size();i++){
            mp[indices[i]]=s[i];
        }
       for(auto &str:mp){
           ans+=str.second;
       }
        return ans;
    }
};