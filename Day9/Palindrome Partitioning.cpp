class Solution {
    
    bool isPalindrome(string &s){        
        int low = 0;
        int high = s.length()-1;
        
        while(low<high){
            if(s[low++] != s[high--])return false;
            
        }
        return true;
    }
    
    void solve(int ind,string &s,vector<string> &temp,vector<vector<string>> &res){
        
        if(ind==s.length()){
            res.push_back(temp);
            return ;
        }
        
        
        for(int i=ind;i<s.length();i++){
            string str = s.substr(ind,i-ind+1);
            if(!isPalindrome(str))continue;
            
            temp.push_back(str);
            solve(i+1,s,temp,res);    
            temp.pop_back();
        }
    }
public:
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> res;
        vector<string> temp;
        
        solve(0,s,temp,res);
        return res;
        
    }
};
