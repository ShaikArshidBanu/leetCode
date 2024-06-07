class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string s;
        stringstream ss(sentence);
        vector<string>v;
        
        while(getline(ss,s,' ')){
            v.push_back(s);
        }
        
        for(int i=0;i<dictionary.size();i++){
            string element=dictionary[i];
        for(int j=0;j<v.size();j++){
            if(v[j].substr(0,element.size())==element) v[j]=element;
        } 
    }
        
        string ans="";
        for(int i=0;i<v.size()-1;i++){
            ans+=v[i]+" ";
        }
        ans+=v[v.size()-1];
        return ans;
        }
    
};