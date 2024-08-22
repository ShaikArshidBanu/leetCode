class Solution {
public:
    bool dfs(int i,vector<int>&visited,vector<vector<int>>&graph,int color){
        visited[i]=color;
        for(auto k:graph[i]){
            if(visited[k]==-1){
              if(!dfs(k,visited,graph,1-visited[i])) return false;
            }
            else {
                if(visited[k]==visited[i]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>visited(n,-1);
        for(int i=0;i<n;i++){
            if(visited[i]==-1){
                if(!dfs(i,visited,graph,0)) return false;
            }
        }
        return true;
    }
};