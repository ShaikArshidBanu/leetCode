class Solution {
public:
    bool topological_sort(vector<vector<int>>& adj){
        int n=adj.size();
        vector<int>indegree(n);
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<n;i++){
                for(auto k:adj[i]){
                    indegree[k]++;
                }
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            ans.push_back(cur);
            for(auto k:adj[cur]){
                indegree[k]--;
                if(indegree[k]==0) q.push(k);
            }
        }
        if(ans.size()==n) return true;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        return topological_sort(adj);
    }
};