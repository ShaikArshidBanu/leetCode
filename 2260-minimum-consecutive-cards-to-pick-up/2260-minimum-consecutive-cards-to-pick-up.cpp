class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int left=0,right=0,result=INT_MAX;
        map<int,int>mp;
        while(right<cards.size()){
            mp[cards[right]]++;
            while(mp[cards[right]]>1) 
            {
                mp[cards[left++]]--;
                result=min(result,right-left+2);
            }
            
            right++;
        }
        return result==INT_MAX?-1:result;
    }
};