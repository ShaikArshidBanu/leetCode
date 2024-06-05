class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>result;
        for(char ch='a';ch<='z';ch++){
            int mini=INT_MAX;
            for(string word:words){
                int cnt=0;
                for(char c:word){
                    if(ch==c) cnt++;
                }
                mini=min(cnt,mini);
            }
            for(int i=0;i<mini;i++){
                result.push_back(string(1,ch));
            }
        }
        return result;
    }
};