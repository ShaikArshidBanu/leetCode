class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        int ans;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto &it:mp){
          p.push_back({it.second,it.first});
        }
        sort(p.begin(),p.end());
        int i;
        for(i=0;i<p.size();i++){
           if(p[i].first<=k){
               k-=p[i].first;
           } 
            else{
                break;
            } 
           
        }
        return  p.size()-i;
    }
};