class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(),nums.end());
        
        int maxEle = 0;
        
        for(auto val : nums){
            
            if(!st.count(val-1)){
                
                int cnt  = 1;
                
                
                while(st.count(val+1)){
                    cnt++;
                    val++;
                }
                
                maxEle = max(maxEle,cnt);
            }
        }
        return maxEle;
       
        
    }
};

