class Solution {
public:
    void bfs(int i,int n,vector<int> &visited, vector<vector<int>>& isConnected){
        queue<int>q;
        q.push(i);
        visited[i]=1;
        while(!q.empty()){
            int cur=q.front();
            q.pop();
           for (int j = 0; j < isConnected.size(); j++)
                {
                    if (!visited[j] && isConnected[cur][j] == 1)
                    {
                        q.push(j);
                        visited[j] = 1;
                    }
                }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
         int n=isConnected.size();
        vector<int> visited(n,0);
            for(int i=0;i<n;i++){
               if(visited[i]==0){
                   count++;
                   bfs(i,n,visited,isConnected);
               }
        }
        return count;
    }
};