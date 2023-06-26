
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
       sort(arr,arr+n);
       sort(dep,dep+n);
       
       int maxP = 0;
       int currP = 0;
       priority_queue<int,vector<int>,greater<int> > pq;
       
       for(int i=0;i<n;i++){
           
           while(pq.size() && pq.top()<arr[i]){
               currP--;
               pq.pop();
           }
           
           if(pq.empty() || pq.top() >= arr[i]){
               currP++;
               if(currP>maxP)maxP = currP; 
               pq.push(dep[i]);
           }
 
       }
       return maxP;
       
    }
