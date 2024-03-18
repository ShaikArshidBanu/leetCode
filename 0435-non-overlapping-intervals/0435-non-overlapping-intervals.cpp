class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int ans=0,tmp=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(tmp>intervals[i][0]){
                ans++;
                tmp=min(tmp,intervals[i][1]);
            }
            else tmp=intervals[i][1];
        }
        return ans;
    }
};