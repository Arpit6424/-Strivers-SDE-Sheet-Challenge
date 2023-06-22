class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        
        int n = nums.size();
        int res = 0;
        
        for(int i=0;i<n;i++){
            
            int cnt = 0;
            while(i<n && nums[i]){
                cnt++;
                i++;
            }
            
            res = max(res,cnt);
        }
        return res;
        
    }
};
