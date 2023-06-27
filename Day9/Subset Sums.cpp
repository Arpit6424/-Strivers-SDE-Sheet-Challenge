    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
         int totEle = pow(2,N);
         
         vector<int> res(totEle);
         
         
         for(int i=0;i<totEle;i++){
             
            int val = i;
            int sum = 0;
            for(int i=0;i<N;i++){
                if(val & (1<<i) )sum += arr[i];
            }
            
            res[i] = sum;
         }
         return res;
         
    }
