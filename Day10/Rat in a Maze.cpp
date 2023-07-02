class Solution{
    private:
     int di[4] = {-1,1,0,0};
     int dj[4] = {0,0,-1,1};
     char dir[4] = {'U','D','L','R'};
    private:
    void solve(int i, int j, vector<vector<int>> &m,string &path,vector<string> &res){
        
        int n = m.size();
        
        if(m[i][j]==0)return ;
        if(i==n-1 && j==n-1){
            
            res.push_back(path);
            return ;
        }
        
        
        for(int ind=0;ind<4;ind++){
            int newi = i + di[ind];
            int newj = j + dj[ind];
            
            if( newi==n || newi<0 || newj==n || newj<0 || m[newi][newj]==0)continue;
            
            char ch = dir[ind];
            path.push_back(ch);
            m[i][j] = 0;
            
            solve(newi,newj,m,path,res);
            
            m[i][j] = 1;
            path.pop_back();
        }
         
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string> res;
        string path="";
        solve(0,0,m,path,res);
        return res;
    }
}
