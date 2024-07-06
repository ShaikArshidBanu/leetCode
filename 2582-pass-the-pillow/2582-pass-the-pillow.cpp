class Solution {
public:
    int passThePillow(int n, int time) {
        int num=1,dir=1;
        while(time--){
            if(dir){
                num++;
                if(num==n) dir=0;
            }
            else {
                num--;
                if(num==1) dir=1;
            }
        }
        return num;
    }
};