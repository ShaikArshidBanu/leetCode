class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]>5) return false;
        int no_of_fives=0;
        int no_of_tens=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) no_of_fives++;
            else if(bills[i]==10) {
                if(no_of_fives<1) return false;
                    no_of_fives--;
                    no_of_tens++;
            }
          else  {
                 if (no_of_fives > 0 && no_of_tens > 0) {
                    no_of_fives--;
                    no_of_tens--;
                } else if (no_of_fives > 2) {
                    no_of_fives -= 3;
                } else {
                    return false;
                }
                  
            }
        }
        return true;
    }
};
