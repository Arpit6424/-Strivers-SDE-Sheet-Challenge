class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int maxLeft = height[0];
        int maxRight = height[n-1];
        
        int low = 1;
        int high = n-2;
        
        int res = 0;
        while(low<=high){
            
            if(maxLeft<maxRight){
                
                if(height[low] > maxLeft)maxLeft = height[low];
                else res += maxLeft - height[low];
                
                low++;
            }
            else{
                if(height[high] > maxRight)maxRight = height[high];
                else res += maxRight - height[high];
                high--;
            }
        }
        return res;
        
    }
};
