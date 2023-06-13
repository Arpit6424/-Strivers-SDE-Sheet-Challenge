class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        int cnt = 0;
        int element;
        for(auto it : nums){
            
            if(cnt==0)element = it;
            
            if(element == it)cnt++;
            else cnt--;
        }
        return element;
        
    }
};
