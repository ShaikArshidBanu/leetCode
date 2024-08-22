class Solution {
public:
    bool bfs(int start, vector<vector<int>>&graph,vector<int>&visited){
        queue<int>q;
        q.push(start);
        visited[start]=0;
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            for(auto k:graph[cur]){
             if(visited[k]==-1){
                 q.push(k);
                 visited[k]=1-visited[cur];
             } else{
                 if(visited[k]==visited[cur]) return false;
             }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>visited(n,-1);
        for(int i=0;i<n;i++){
            if(visited[i]==-1){
                if(!bfs(i,graph,visited)) return false;
            }
        }
        return true;
    }
};