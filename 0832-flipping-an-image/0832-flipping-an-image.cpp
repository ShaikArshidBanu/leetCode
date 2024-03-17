class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size(),n=image[0].size();
       for(int i=0;i<m;i++){
           for(int j=0;j<n/2;j++){
               int temp=image[i][j];
               image[i][j]=image[i][n-j-1];
               image[i][n-j-1]=temp;
           }
       }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(image[i][j]==0) image[i][j]=1;
                else if(image[i][j]==1) image[i][j]=0;
                    }
        }
        return image;
    }
};