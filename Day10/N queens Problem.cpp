
class Solution {
    
    
    bool isValid(int row,int col, vector<string> &temp){
        
        int n = temp.size();
        
        int i =row-1,j=col-1;
        
        while(i>=0 && j>=0){
            if(temp[i][j]=='Q')return false;
            i--;j--;
        }
        
        i = row-1;
        j = col+1;
        while( i>=0 && j<n){
           if(temp[i][j]=='Q')return false;
            i--;j++;
        }
        
         i = row-1;
         j = col;
        
        while(i>=0){
             if(temp[i][j]=='Q')return false;
            i--;
        }
        return true;
        
    }
    
    
    void solve(int row,vector<string> &temp,vector<vector<string>> &res){
        
        int  n = temp.size();
        if(row==n){
            res.push_back(temp);
            return ;
        }
        
        
        
       for(int j=0;j<n;j++){
           
           if(isValid(row,j,temp)){
               temp[row][j] = 'Q';
               solve(row+1,temp,res);
               temp[row][j]=  '.';
           }
       }
        
        
        
   
    }
    
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> res;        
        string str(n,'.');       
        vector<string> temp(n,str);
        
        solve(0,temp,res);
        
        return res;

        
    }
};
