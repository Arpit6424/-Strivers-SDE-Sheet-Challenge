class Solution {
    
    void solve(int ind,vector<int> &C,int T,vector<int> &temp,vector<vector<int>> &res){
        
        if(T<0)return ;
        if(ind==C.size() || T==0){
            if(T==0)
             res.push_back(temp);
            return ;
        }
        
        
        
        temp.push_back(C[ind]);
        solve(ind,C,T-C[ind],temp,res);
        temp.pop_back();
        
        
        
        solve(ind+1,C,T,temp,res);
        

        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& C, int T) {
        
        vector<vector<int>> res;
        
        vector<int> temp;
        
        solve(0,C,T,temp,res);
        return res;
        
    }
};
