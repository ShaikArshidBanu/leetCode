class Solution {
public:
    bool canPlaceBall(vector<int>position,int m,int mid){
        int count=1;
        int last_position=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-last_position>=mid){
                count++;
                last_position=position[i];
            } 
            if(count==m) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1,high=position.back()-position.front();
        while(low<high){
            int mid=(low+high+1)/2;
            if(canPlaceBall(position,m,mid)) low=mid;
            else high=mid-1;
        }
        return low;
    }
};