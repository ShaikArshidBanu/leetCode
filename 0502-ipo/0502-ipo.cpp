class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<vector<int>>cp;
        for(int i=0;i<n;i++){
            cp.push_back({capital[i],profits[i]});
        }
        sort(cp.begin(),cp.end());
        priority_queue<int>pq;
        int i=0;
        while(k--){
             while (i < n && cp[i][0] <= w) {
                pq.push(cp[i][1]);
                i++;
            }
            if (pq.empty()) {
                break;
            }
            w += pq.top();
            pq.pop();
        }
        return w;
        }
    
};