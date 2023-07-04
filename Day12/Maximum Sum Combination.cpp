vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    priority_queue<pair<int,pair<int,int>> > minPq;
    int  n = A.size();
    
    
    minPq.push({A[n-1]+B[n-1] , {n-1,n-1}});
    
    set<pair<int,int>> st;
    st.insert({n-1,n-1});
    
    vector<int> res;
    
    while(C--){
        
        auto it = minPq.top();
        minPq.pop();
        
        int val = it.first;
        int L = it.second.first;
        int R = it.second.second;
        
        res.push_back(val);
        
        
        
        if(L > 0  && R>0 && st.find({L-1,R}) == st.end() ){
            minPq.push({ A[L-1]+B[R],{L-1,R} });
            st.insert({L-1,R});
        }
        if(L > 0  && R>0  && st.find({L,R-1})==st.end()){
            minPq.push({A[L]+B[R-1],{L,R-1}});
            st.insert({L,R-1});
        }
        
    }
    
    

    return res;
}
