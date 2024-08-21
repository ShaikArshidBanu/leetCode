class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;
        for(int i=0;i<n;i++){
            int sum=0,j=0;
            int z=k;
            if(k>0){
                j=i+1;
                while(z--){
                    sum+=code[j%n];
                    j++;
                }
            } else if(k<0){
                if(i==0) j=n-1;
                else j=i-1;
                while(z++){
                    sum+=code[j];
                    if(j==0) j=n-1;
                    else j--;
                }
            }
            ans[i]=sum;
        }
        return ans;
    }
};