class OrderedStream {
public:
    vector<string> orderedStream;
    int start;
    OrderedStream(int n) {
        for(int i=0;i<n;i++){
            orderedStream.push_back("");
        }
        start=0;
    }
    
    vector<string> insert(int idKey, string value) {
        orderedStream[idKey-1] = value; 
        
        vector<string> ans;
        
        for(int i=start; i<orderedStream.size(); i++){
            if(orderedStream[i] != ""){
                start++; 
                ans.push_back(orderedStream[i]);
            }
            else{
                return ans;
            }
        }
        
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */