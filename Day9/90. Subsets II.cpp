class Solution {
    
    void solve(int ind,vector<int> &nums,vector<int> temp,vector<vector<int>> &res){
    
        int n = nums.size();
        if(ind==n){
            res.push_back(temp);
            return ;
        }

        temp.push_back(nums[ind]);
        solve(ind+1,nums,temp,res);
        temp.pop_back();

        while(ind+1< n && nums[ind] == nums[ind+1] )ind++;
        solve(ind+1,nums,temp,res);
    }
    
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;      
        vector<int> temp;        
        solve(0,nums,temp,res);        
        
        return res;
        
    }
};
