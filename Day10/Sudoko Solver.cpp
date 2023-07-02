class Solution {
    
    bool isValid(int row,int col, char digit,vector<vector<char>>& board){
        
        for(int i=0;i<9;i++){
            if(board[i][col]==digit)return false;
            if(board[row][i]==digit)return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==digit)return false;            
        }
        return true;
        
        
    }
    
    bool solve(vector<vector<char>>& board){
   
        int n = board.size();
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.' )continue;
                for(char val= '1';val<='9';val++){                     
                    
                    if(!isValid(i,j,val,board) )continue;
                    
                    board[i][j] = val;                    
                    if(solve(board))return true;                    
                    board[i][j] = '.';                                    
                }
                return false;
            }
        }
        return true;;
    }
    
public:
    void solveSudoku(vector<vector<char>>& board) {

        solve(board);        
        
        
    }
};
