class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> ans;
        for(auto it:nums1){
            st.insert(it);
        }
        for(auto i:nums2){
            if(st.count(i)) {
                ans.push_back(i);
                st.erase(i);
            }
        }
        return ans;
    }
};