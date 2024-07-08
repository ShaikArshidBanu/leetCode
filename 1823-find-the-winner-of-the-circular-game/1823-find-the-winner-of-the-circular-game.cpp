class Solution {
    int solve(vector<int> &v,int i,int k){
        int n=v.size();
        if(n==1) return v[0];
        int el=(i+k-1)%n;
        v.erase(v.begin()+el);
        return solve(v,el,k);
    }
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
       return solve(v,0,k);
    }
};