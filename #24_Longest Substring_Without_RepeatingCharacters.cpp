#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
        int  n = s.size();
        if(n==0 || n==1)return n;
        
        unordered_map<char , int> map;
        
        int maxLen = 0;
    
        int left=0;
        
        for(int right=0;right<n;right++){
            
            if(map.find(s[right]) != map.end()){
               left = max(map[s[right]]+1 ,left);
            }
            
            map[s[right]] = right;
            
            maxLen= max(maxLen, right - left +1);
        }

        return maxLen;
}
