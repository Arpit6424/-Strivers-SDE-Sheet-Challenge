class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> res;
        
        int prevEnd = INT_MIN;       
        
        for(int i=0;i<intervals.size();i++){
            
            if(prevEnd>=intervals[i][0]){
                res[res.size()-1][1] = max(res[res.size()-1][1],intervals[i][1]);
               prevEnd = max(prevEnd,intervals[i][1]);
            }
            else{
                res.push_back(intervals[i]);
                prevEnd = intervals[i][1];
            }
        }
        return res;
        
    }
};
