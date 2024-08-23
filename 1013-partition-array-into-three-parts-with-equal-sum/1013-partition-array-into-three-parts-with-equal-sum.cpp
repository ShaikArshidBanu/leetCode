class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        if(sum%3!=0) return false;
        
        int target_sum=sum/3;
        int count=0;
        int cur_sum=0;
        for(int i=0;i<arr.size()-1;i++){
            cur_sum+=arr[i];
            if(cur_sum==target_sum){
                cur_sum=0;
                count++;
                if(count==2) return true;
            }
            
        }
        return false;
    }
};