class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>mp;
        for(int i=0;i<difficulty.size();i++){
            mp.push_back({difficulty[i],profit[i]});
        }
        sort(mp.begin(),mp.end());
        sort(worker.begin(),worker.end());
        int ans=0,i=0,curr=0;
        for(int ability:worker){
            while(i<mp.size() && mp[i].first<=ability){
                curr=max(curr,mp[i].second);
                i++;
            }
            ans+=curr;
        }
        return ans;
    }
};