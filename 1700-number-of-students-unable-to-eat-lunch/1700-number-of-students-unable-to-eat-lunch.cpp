class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        unordered_map<int,int>mp;
        for(auto stu:students) mp[stu]++;
        int ans=students.size();
        for(auto san:sandwiches){
            if(mp[san]>0){
                ans--;
                mp[san]--;
            } else return ans;
        }
        return ans;
    }
};