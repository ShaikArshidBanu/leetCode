class Solution {
public:
    string reverseWords(string s) {
        string ans="";
         int strt=0;
        for(int i=0;i<=s.size();i++){
            if(i==s.size() || s[i]==' '){
                string temp=s.substr(strt,i-strt);
                reverse(temp.begin(),temp.end());
                ans+=temp;
                if(i!=s.size()) {
                    ans+=" ";
                }
                strt=i+1;
            }
        }
       
        return ans;
    }
};