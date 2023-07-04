class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> mp;
        
        for(auto it : nums)mp[it]++;
        
        priority_queue<pair<int,int>> maxPq;
        
        for(auto it : mp){
            maxPq.push({it.second,it.first});
        }
        
        vector<int> res;
        while(k--){
            res.push_back(maxPq.top().second);
            maxPq.pop();
        }
        return res;
        
    }
};
