class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        vector<vector<int>> res;
        
        for(int i=0;i<n;i++){
            
            int low = i+1;
            int high = n-1;
            
            while(low<high){
                
                int sum = nums[i]+nums[low] + nums[high];                
                if(sum==0){
                    res.push_back({nums[i],nums[low],nums[high]});
                    
                    int val = nums[low];
                    while(low<high && nums[low]==val)low++;
                    
                    val = nums[high];
                    while(low<high && nums[high] == val)high--;
                    
                }                
                else if(sum>0)high--;
                else low++;
            }
            
            while(i+1<n && nums[i] == nums[i+1])i++;
            
        }
        return res;
        
    }
};
