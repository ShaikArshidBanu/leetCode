class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int,string>>vp;
        vector<string>ans;
        int n=names.size();
        for(int i=0;i<n;i++){
           vp.push_back(make_pair(heights[i],names[i]));
        }
         sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        for(auto& it:vp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};