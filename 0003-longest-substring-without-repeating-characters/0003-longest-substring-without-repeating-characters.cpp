class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,result=0;
        map<char,int>mp;
        while(right<s.size()){
            mp[s[right]]++;
            while(mp[s[right]]>1) mp[s[left++]]--;
            result=max(result,right-left+1);
            right++;
        }
        return result;
    }
};