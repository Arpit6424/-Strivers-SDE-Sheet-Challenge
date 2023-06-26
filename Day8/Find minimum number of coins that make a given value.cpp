    int solve(int coins[], int M, int V,vector<int> &dp){
        if(V<0)return 1e8;
	   if(V==0)return 0;
	   
	   if(dp[V] != -1)return dp[V];
	   
	   int ans = 1e8;

	   for(int i=0;i<M;i++){
	     ans = min(ans, 1 + solve(coins,M,V-coins[i],dp));
	   }
	   
	   return dp[V] =  ans;
    }

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    
	    vector<int> dp(V+1,-1);
	    int mini =  solve(coins,M,V,dp);
	    if(mini>= 1e8)return -1;
	    return mini;

	} 
