class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans=1;
        int x=points[0][1];
        for(int i=1;i<points.size();i++){
            if(x>=points[i][0]) x=min(x,points[i][1]);
            else {
                ans++;
                x=points[i][1];
            }
        }
        return ans;
    }
};