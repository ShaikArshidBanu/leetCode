class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        map<char,int>mp;
        for(int i=0;i<allowed.size();i++){
            mp[allowed[i]]++;
        }
        for(int i=0;i<words.size();i++){
            bool flag=true;
            for(int j=0;j<words[i].size();j++){
            if(mp.find(words[i][j])==mp.end())  flag=false;
                }
           if(flag) count++;
        }
        
        return count;
    }
};