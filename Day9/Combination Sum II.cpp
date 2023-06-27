class Solution {
    
    void solve(int ind,vector<int> &C,int T, vector<int> &temp,vector<vector<int>> &res){
        
        if(T<0)  return;      
        if(ind==C.size() || T==0){
            if(T==0) res.push_back(temp);
            return ;
        }
        
        temp.push_back(C[ind]);
        solve(ind+1,C,T-C[ind],temp,res);
        temp.pop_back();
        
        while(ind+1<C.size() && C[ind] == C[ind+1])ind++;
        
        solve(ind+1,C,T,temp,res);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& C, int T) {
        
        sort(C.begin(),C.end());
        vector<vector<int>> res;        
        vector<int> temp;        
        solve(0,C,T,temp,res);
        return res;
        
    }
};
