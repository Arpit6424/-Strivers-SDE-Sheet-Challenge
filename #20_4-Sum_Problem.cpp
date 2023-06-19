class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());        
        vector<vector<int>> res;
        int n = nums.size();
        
        
        
        for(int i=0;i<n;i++){
            long long newT = target - nums[i];
            
            for(int j=i+1;j<n;j++){
                long long newTT = newT - nums[j];
                
                int low = j+1;
                int high = n-1;
                
                while(low<high){
                    
                    if(newTT==nums[low]+nums[high]){
                        res.push_back({nums[i],nums[j],nums[low],nums[high]});
                        
                        int val1 = nums[low];
                        int val2 = nums[high];
                        
                        while(low<high && val1==nums[low])low++;
                        while(low<high && val2==nums[high])high--;                        
                    }
                    
                    else if(newTT <= nums[low]+nums[high])high--;
                    else low++;
                }
                
                while(j+1<n && nums[j] == nums[j+1])j++;
            }
            while(i+1<n && nums[i] == nums[i+1])i++;
            
        }
        return res;
        
    }
};
