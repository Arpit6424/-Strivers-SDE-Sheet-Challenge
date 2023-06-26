    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
        vector<pair<int,int>> arr(n);
        
        for(int i=0;i<n;i++){
            arr[i] = {start[i],end[i]};
        }
        
        sort(arr.begin(),arr.end(),[](const pair<int,int> a, const pair<int,int> b){
            return a.second < b.second;
        });
        
        int prevEnd = 0;
        int cnt = 0;
        
        for(int i=0;i<n;i++){
            
            if(prevEnd<arr[i].first){
                cnt++;
                prevEnd = arr[i].second;
            }
        }
        return cnt;
    }
