class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int curr_strt=intervals[0][0];
        int curr_end=intervals[0][1];
        for(int i=0;i<intervals.size();i++){
            if(curr_end>=intervals[i][0]){
                curr_end=max(curr_end,intervals[i][1]);
            }
            else{
                ans.push_back({curr_strt,curr_end});
                curr_strt=intervals[i][0];
                curr_end=intervals[i][1];
            }
        }
        ans.push_back({curr_strt,curr_end});
        return ans;
    }
};