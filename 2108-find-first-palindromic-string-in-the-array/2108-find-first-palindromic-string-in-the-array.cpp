class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(auto i:words){
            string element=i;
            reverse(element.begin(),element.end());
            if(i==element) {
                ans=element;
                break;
            }
        }
        return ans;
    }
};