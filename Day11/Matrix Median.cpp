int Solution::findMedian(vector<vector<int> > &A) {
    
    int n = A.size();
    int m = A[0].size();
    int low =1;
    int high = 1e9;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        int cnt = 0;
        
        for(auto &it : A ){            
            cnt += upper_bound(it.begin(),it.end(),mid) - it.begin();
        }
        
        if(cnt <= (n*m)/2)low= mid+1;
        else high = mid-1;       
        
    }
    return low;
}
