class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> mp;
        int sum = 0;
        mp[0] = -1;
        int maxi = 0;
        for(int i=0;i<n;i++){
            sum += A[i];
            if(mp.find(sum) != mp.end()){
                maxi = max(maxi,i-mp[sum]);
            }
            else mp[sum] = i;
        }
        return maxi;
    }
};
