

bool isPossibleDis(int dis,vector<int> &stalls, int k){

   int st = stalls[0];

   for(int i=1;i<stalls.size();i++){
       
       if(stalls[i]-st >= dis){
           k--;
           st = stalls[i];
       }
   }

   return k<=1;
    
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
      if(k>stalls.size())return -1;

      sort(stalls.begin(),stalls.end());

      int low = 1;
      int high = stalls.back() - stalls[0];

      int res = -1;
      while(low<=high){


          int dis = low + (high-low)/2;

          if(isPossibleDis(dis,stalls,k)){
              low = dis+1;
              res = dis;
          }
          else high = dis-1;
      }
      return res;
    
}
