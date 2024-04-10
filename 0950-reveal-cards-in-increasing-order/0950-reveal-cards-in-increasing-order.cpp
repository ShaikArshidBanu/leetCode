class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        vector<int>ans(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        for(int i=0;i<n;i++){
            int u=q.front();
            q.pop();
            ans[u]=deck[i];
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};