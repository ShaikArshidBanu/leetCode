class Solution {
    int game(int start,int end,vector<int>& nums){
        if(start>end) return 0;
        if(start==end)return nums[start];
        int take_start=nums[start]+std::min(game(start+2,end,nums),game(start+1,end-1,nums));
        int take_end=nums[end]+std::min(game(start+1,end-1,nums),game(start,end-2,nums));
      
        return std::max(take_start,take_end);

    }
public:
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int total_score=accumulate(nums.begin(),nums.end(),0);
        int player_1=game(0,n-1,nums);
        int player_2=total_score-player_1;
        return (player_1>=player_2);

    }
};

