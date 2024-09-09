class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        vector<int>v;
        int count=0,sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mp[grid[i][j]]++;
                count++;
                sum+=grid[i][j];
            }
        }
        int repeated;
        for(auto k:mp){
            if(k.second>1) {
                v.push_back(k.first);
                repeated=k.first;
            }
        }
       sum-=repeated;
        int total_sum=(count*(count+1))/2;
        v.push_back(total_sum-sum);
      return v;
    }
};