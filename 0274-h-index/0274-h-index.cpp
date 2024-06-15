class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        int l=0,ans=0,r=citations.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(citations[mid]>=(n-mid)){
                ans=max(ans,n-mid);
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans; 
    }
};

