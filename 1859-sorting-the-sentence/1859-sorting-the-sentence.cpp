class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mp;
       string ans="";
       string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]>='1' && s[i]<='9'){
                mp[s[i]]=temp;
                temp.clear();
            }
            else if(s[i]==' ') continue;
            else if(!(s[i]>='1' && s[i]<='9')){
                temp.push_back(s[i]);
            }
        }
        for(auto it:mp){
            ans+=it.second;
            ans+=' ';
        }
        ans.erase(ans.end()-1);
        return ans;
    }
};