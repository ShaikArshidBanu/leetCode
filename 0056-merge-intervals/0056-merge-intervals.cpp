class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        if(n==1) return intervals;
        vector<int>current_interval=intervals[0];
        for(int i=1;i<n;i++){
            if(current_interval[1] >= intervals[i][0]) {
                current_interval[1] = max(current_interval[1], intervals[i][1]);
            } 
            else {
                ans.push_back(current_interval);
                current_interval=intervals[i];
            }
        }
          ans.push_back(current_interval);
        return ans;
    }
};