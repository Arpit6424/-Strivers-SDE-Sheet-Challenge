#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, long long n)
{
	// Write your code here 

 
    long long s=0,s2=0;

    long long sn = ((1LL*n)*(n+1))/2;
    long long s2n = ((1LL*n+1)*(2*n+1)*n)/6;
    for(int i=0;i<n;i++){
        s += (long long)arr[i];
        s2 += (long long)arr[i] * (long long)arr[i];
     
    }

    long long val1 = s - sn;
    long long val2 = (s2 - s2n)/val1;
    

    int x = (val1+val2)/2;
    int y = x - val1;
    return {y,x}; 
  
 
	
}
