class Solution {
public:
    int blossom(vector<int>& bloomDay, int n, int k,int mid){
        int count=0,bouquet=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count==k){
                    bouquet++;
                    count=0;
                }
            } 
            else count=0;
        }
        return bouquet;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long el=(long long)m*k;
        if(el > n) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(blossom(bloomDay,n,k,mid)>=m){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};