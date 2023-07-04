


bool isPossible(int mid,vector<int> &A, int B){
    
    
    int cntPages = 0;
    
    for(auto it : A){
         cntPages += it;       
        if(cntPages>mid){
            B--;
            cntPages = it;
        }             
    }
    return B>=1;
}


int Solution::books(vector<int> &A, int B) {
    
    if(A.size() <B)return -1;
    
    int high = 0;
    int low = 0;
    
    for(auto it :A){
        high += it;
        if(low<it)low = it;
        
    }
    
  
    
    int res =-1;
    while(low<=high){
        
        int mid = low + (high-low)/2;
        
        if(isPossible(mid,A,B)){
            res =mid;
            high = mid-1;
        }
        else{
            low =mid+1;
            // cout<<mid<<" ";
        } 
    }
    return res;
}
