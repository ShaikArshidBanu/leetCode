class Solution {
public:
    bool isPalindrome(string s) {
        string original="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')|| (s[i]>='0' && s[i]<='9'))original+=s[i];
            if(s[i]>='A' && s[i]<='Z') original+=s[i]-'A'+'a';
            
        }
        
        string str=original;
        reverse(original.begin(),original.end());
        return str==original;
    }
};