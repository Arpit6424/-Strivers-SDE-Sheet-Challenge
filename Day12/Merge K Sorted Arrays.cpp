#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 

    priority_queue< pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> minPq;

    vector<int> res;

    for(int i=0;i<kArrays.size();i++)minPq.push({kArrays[i][0], {i,0}});

    while(minPq.size()){
        
        auto it = minPq.top();
        minPq.pop();

        res.push_back(it.first);
        int arrayNo = it.second.first;
        int ind = it.second.second;

        if(ind+1<kArrays[arrayNo].size() ){
            minPq.push({kArrays[arrayNo][ind+1], {arrayNo,ind+1}});
        }
    }
    return res;
}
