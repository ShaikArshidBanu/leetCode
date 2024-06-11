class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>ans, notInArr2;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        
        for(int i=0;i<arr2.size();i++){
            for(auto it:mp){
            if(arr2[i]==it.first) {
             for(int j=0;j<it.second;j++)   ans.push_back(it.first);
            }  
                }
            mp.erase(arr2[i]);
        }
       for (auto& pair : mp) {
            for (int i = 0; i < pair.second; i++) {
                notInArr2.push_back(pair.first);
            }
        }
 
        sort(notInArr2.begin(), notInArr2.end());
        for (int num : notInArr2) {
            ans.push_back(num);
        }

        return ans;
    }
};