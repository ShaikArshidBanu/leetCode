class Solution {
public:
    int pivotInteger(int n) {
        int total_sum=n*(n+1)/2,prev_sum=0;
        for(int i=0;i<=n;i++){
            if(total_sum-prev_sum==i) return i;
            prev_sum+=i;
            total_sum-=i;
        }
        return -1;
    }
};