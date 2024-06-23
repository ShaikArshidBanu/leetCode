class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
       multiset<int,greater<int>>ms;
        int longest=0,l=0;
        for(int r=0;r<nums.size();r++){
            ms.insert(nums[r]);
            int low=*ms.rbegin();
            int high=*ms.begin();
            while(abs(high-low)>limit){
                ms.erase(ms.find(nums[l]));
                l++;
                low=*ms.rbegin();
                high=*ms.begin();
            }
            longest=max(longest,r-l+1);
        }
        return longest;
    }
};