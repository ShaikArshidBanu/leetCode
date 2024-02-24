class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1,s2;
        vector<int>ans1,ans2;
        for(auto i:nums1) s1.insert(i);
        for(auto i:nums2) s2.insert(i);
        set<int>st1;
        for(int i=0;i<nums1.size();i++){
            int element=nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(s2.find(element) == s2.end()){
                     st1.insert(element); 
                    break;
                }   
            }
        }
         set<int>st2;
         for(int i=0;i<nums2.size();i++){
            int element=nums2[i];
            for(int j=0;j<nums1.size();j++){
                if(s1.find(element) == s1.end()) {
                    st2.insert(element); 
                    break;
                }
            }
        }
       
         for(auto i:st1)ans1.push_back(i);
          for(auto i:st2)ans2.push_back(i);
        return{ans1,ans2};
    }
};