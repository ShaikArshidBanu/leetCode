class Solution {
    double solve(double x,int &n){
        double ans=1;
        long long power=n;
        if(power<0){
            power=-power;
            x=1/x;
        }
     
        while (power > 0) {
            if (power % 2 == 1) {  
                ans *= x;
            }
            x *= x;                
            power /= 2;           
        }
      
        return ans;
    }
public:
    double myPow(double x, int n) {
        double ans=solve(x,n);
        return ans;
    }
};