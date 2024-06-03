class Solution {
public:
    int minimumSum(int num) {
        vector<int>arr;
        while(num!=0){
            arr.push_back(num%10);
            num/=10;
        }
       sort(arr.begin(),arr.end());
        int num1=(arr[0]*10)+(arr[3]);
        int num2=(arr[1]*10)+(arr[2]);
        
        return num1+num2;
    }
};