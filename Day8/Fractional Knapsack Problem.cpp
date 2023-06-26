    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
        sort(arr ,arr+n,[](const struct Item A,const struct Item B){
            return (1.0*A.value)/A.weight > (1.0*B.value)/B.weight;
        });

        double totP = 0;
        
        for(int i=0;i<n && W;i++){
            
            if(W >=arr[i].weight ){
                totP += arr[i].value;
                W -= arr[i].weight;
            }
            else{
                totP += (1.0*arr[i].value / arr[i].weight)*W;
                W = 0;
            }
        }
        return totP;
        
        
    }
