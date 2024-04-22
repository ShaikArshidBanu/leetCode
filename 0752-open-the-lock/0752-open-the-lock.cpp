class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>deadendset(deadends.begin(),deadends.end());
        if(deadendset.count("0000")) return -1;
        queue<pair<string,int>>q;
        q.push({"0000",0});
        unordered_set<string>visited;
        while(!q.empty()){
            auto current=q.front();
            q.pop();
            string currentCombination=current.first;
            int moves=current.second;
            if(currentCombination==target) return moves;
            for(int i=0;i<4;i++){
                for(int delta:{-1,1}){
                    int newDigit=(currentCombination[i]-'0'+delta+10)%10;
                    string newCombination=currentCombination;
                    newCombination[i]=newDigit+'0';
                    
                    if(visited.find(newCombination)==visited.end()  &&                    deadendset.find(newCombination)==deadendset.end()){
                        visited.insert(newCombination);
                        q.push({newCombination,moves+1});
                    }
                }
            }
        }
        return -1;
    }
};