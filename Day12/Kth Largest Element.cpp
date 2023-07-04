class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int> , greater<int> > minPq;
        
        for(auto it : nums){
            
            if(minPq.size() < k ){
                minPq.push(it);
                continue;
            }
            
            if(minPq.top() < it){
                minPq.pop();
                minPq.push(it);
                
            }
        }
        return minPq.top();
        
        
    }
};
