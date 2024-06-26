class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>graph;
        for(const auto& edge:edges){
            int u=edge[0];
            int v=edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        unordered_set<int>visited;
        return dfs(source,destination,graph,visited);
        
    }
    bool dfs(int source,int destination,unordered_map<int,vector<int>>&graph,  unordered_set<int>&visited){
        if(source==destination) return true;
        visited.insert(source);
        for(int neighbour:graph[source]){
            if(visited.find(neighbour)==visited.end()){
                if(dfs(neighbour,destination,graph,visited)) return true;
            }
        }
        return false;
    }
};