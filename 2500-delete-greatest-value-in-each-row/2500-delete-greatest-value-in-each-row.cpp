class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
       int n=grid[0].size(),k=grid[0].size(),sum=0; 
        
        for(int i=0;i<grid.size();i++) sort(grid[i].begin(),grid[i].end());
        
        while(k--){
            int maxi=INT_MIN;
          for(int i=0;i<grid.size();i++){
               if(grid[i][k]>maxi) maxi=grid[i][k];
           } 
            sum+=maxi;
            
        }
        return sum;
    }
};