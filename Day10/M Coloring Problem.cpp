    
    bool solve(int node,bool graph[101][101], int m, int n,int color[]){
        
        if(node==n)return true;
        
        
        for(int colorCode =0 ; colorCode<m;colorCode++){
            
            bool f = true;
            for(int adjNode=0;adjNode<n;adjNode++){
                if(graph[node][adjNode] == 1 && color[adjNode]==colorCode ){
                    f = false;
                    break;
                }
            }
            
            if(f){
                color[node] = colorCode;
                if(solve(node+1,graph,m,n,color))return true;
                color[node]  = -1;
            }
            

        }
        
        return false;
        
        
        
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        
        int color[n];
        memset(color,-1,sizeof(color));
        return solve(0,graph,m,n,color);
    }
