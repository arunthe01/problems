int findEquilibrium(int A[], int n)
{
  //Your code here
  int sum = A[0];
  int tsum = 0;
  
  
  for(int i = 0; i<n; i++){
      tsum += A[i];
  }
  
  for(int i = 1; i<n-1 ; i++){
     int k = tsum -(A[i]+sum);
     if(k == sum)
        return i;
        
      sum +=A[i];
  }
  return -1;
}