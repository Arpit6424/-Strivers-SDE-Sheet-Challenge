class Solution {
public:
    string getPermutation(int n, int k) {
        
        vector<int> nums(n);
        iota(nums.begin(),nums.end(),1);

        
        int fact = 1;
        for(int i=2;i<n;i++){
            fact *= i;
        }
   
        
        string res = "";
        k--;
        
        
        for(int i=1;i<=n;i++){
            
            res += to_string(nums[k/fact]);
            nums.erase(nums.begin()+ k/fact);
            
            if(nums.size()==0)break;
            
            k = k%fact;
            fact = fact/nums.size();

        }
        return res;
        

    }
};
