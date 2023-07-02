#include <bits/stdc++.h> 

void solve(int i,string &s,unordered_set<string> st,string temp ,vector<string> &res){

   if(i==s.length()){
       temp.pop_back();
       res.push_back(temp);
       return ;
   }

    for(int ind=i;ind<s.length();ind++){

        string str = s.substr(i,ind-i+1);
        
        if(st.count(str)){

            solve(ind+1,s,st,temp + str + " ",res);
            
            
        }
    }


    
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here

    unordered_set<string> st(dictionary.begin(),dictionary.end() );

    vector<string> res;
    string temp;
    solve(0,s,st,temp,res);
    return res;

}
