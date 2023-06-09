#include <bits/stdc++.h> 

long long merge(long long *arr,int low,int high){

   int mid = low + (high-low)/2;   
   vector<long long> temp;
   int i = low; // start index of left array
   
   int j = mid+1; // start index of right array


   int cnt = 0;
   
   while(i<=mid && j<=high){
       
       if(arr[i] <= arr[j]){
           temp.push_back(arr[i]);
           i++;
       }
       else{
           temp.push_back(arr[j]);
           j++;
           cnt += (mid-i+1);
       }
   }

   while(i<=mid){
           temp.push_back(arr[i]);
           i++;
   }
   while(j<=high){
           temp.push_back(arr[j]);
           j++;
   }

   for(int i=low;i<=high;i++){
       arr[i] = temp[i-low];
   }
   return cnt;
}

long long mergeSort(long long *arr,int low,int high){

    if(low>=high)return 0;
    int cnt = 0;

    int mid = low + (high-low)/2;

    cnt += mergeSort(arr,low,mid);
    cnt += mergeSort(arr,mid+1,high);

    cnt+= merge(arr,low,high);

    return cnt;

    
}

long long getInversions(long long *arr, int n){
    // Write your code here.

    return mergeSort(arr,0,n-1);
}
