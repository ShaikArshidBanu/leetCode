class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0) return false;
        multiset<int>Mset;
        for(int i:hand){
            Mset.insert(i);
        }
        while(!Mset.empty()){
            int strt_pt=*Mset.begin();
            Mset.erase(Mset.find(strt_pt++));
            for(int i=1;i<groupSize;i++){
                if(Mset.find(strt_pt)==Mset.end()) return false;
                else Mset.erase(Mset.find(strt_pt++));
            }
        }
        return true;
    }
};