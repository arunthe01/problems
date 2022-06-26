#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int n){
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        long long sum = 0;
        
        
        for(int i = 0; i<n; i++){
            sum+=abs(A[i]-B[i]);
        }
        
        return sum;
  
  
    }
};

