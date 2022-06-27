#include<bits/stdc++.h>
#include<vector>




vector<int> changeBits(int N) {
        // code here
        int bits = ceil(log2(N+1));
        
        int val = pow(2,bits)-1;
        
        // cout<<val;
      
      
      return{val-N , val};
        
    }