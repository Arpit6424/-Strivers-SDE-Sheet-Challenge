class Solution {
public:
    double myPow(double x, int n) {            
        long long nn = n;
        if(nn<0) nn = -nn;             
        double ans = 1.0;        
        while(nn){            
            if(nn&1){
                ans = ans * x;
                nn = nn-1;
            }            
            x = x*x;
            nn = nn/2;
        }
        
        if(n<0) ans = 1.0/ans;
        return ans;        
    }
};
