class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        int low = 1;
        int high = n-1;
        
        while(low<high){
            
            int mid = low +(high-low)/2;
            
            int cnt = 0;
            for(auto it : nums)if(it<=mid)cnt++;
            
            if(cnt<=mid)low = mid+1;
            else high =mid;
        }
        return low;
        

        
    }
};
