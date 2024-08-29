class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>path(n,0);
        vector<int>visited(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,graph,path,visited,ans);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    bool dfs(int cur,vector<vector<int>>&grid,vector<int>&path,vector<int>&visited,vector<int>&ans){
        if (path[cur]) return true;
        if (visited[cur]) return false;
        path[cur]=1;
        for(auto k:grid[cur]){
                if(dfs(k,grid,path,visited,ans)) return true;
             }
        path[cur]=0;
        visited[cur]=1;
        ans.push_back(cur);
         return false;
    }
};