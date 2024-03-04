class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        int left=0,score=0,max_score=0;
        int right=n-1;
        while(left<=right){
            if(tokens[left]<=power){
                score++;
                power-=tokens[left++];
                max_score=max(max_score,score);
            }
            else if(score){
                power+=tokens[right--];
                score--;
            }
            else break;
        }
        return max_score;
    }
};