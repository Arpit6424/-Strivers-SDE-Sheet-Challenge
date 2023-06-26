    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        sort(arr,arr+n,[](struct Job a,struct Job b){
            return a.profit > b.profit;
        });
        
        int maxDead = 0;
        
        for(int i=0;i<n;i++){
            if(maxDead<arr[i].dead)maxDead = arr[i].dead;

          vector<int> visDead(maxDead+1,0);
        // cout<<maxDead;
        
        int totP = 0;
        int cntJ = 0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead ;j>=1;j--){
                
                if(visDead[j]==0){
                    // cout<<arr[i].id<<" ";
                    totP += arr[i].profit;
                    visDead[j] = 1;
                    cntJ++;
                    break;
                    
                }
            }
        }
        
        return {cntJ,totP};
        
        
    } 
