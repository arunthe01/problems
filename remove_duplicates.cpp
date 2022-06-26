vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        unordered_map<int,int> u;
        vector<int> v;
        
        for(int i = 0; i<n; i++){
            if(u.find(arr[i]) == u.end()){
                v.push_back(arr[i]);
                u[arr[i]] =1;
            }
            
                
        }
        
        return v;
    }