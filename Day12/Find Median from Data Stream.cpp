class MedianFinder {
public:
    
    priority_queue<int> maxPq;
    priority_queue<int,vector<int>,greater<int>> minPq;
    
    int maxPqSize;
    int minPqSize;
    
    MedianFinder() {
        maxPqSize=0;
        minPqSize=0;      
 }
    
    void addNum(int num) { 
        
        if(maxPqSize==0 || maxPq.top() >= num ){
            maxPq.push(num);
            maxPqSize++;
        }
        else{
            minPq.push(num);
            minPqSize++;
        }
        
        
        if(maxPqSize-1 > minPqSize){
            minPq.push(maxPq.top());
            maxPq.pop();
            minPqSize++;
            maxPqSize--;            
        }
        else if(maxPqSize <  minPqSize){
            maxPq.push(minPq.top());
            minPq.pop();
            minPqSize--;
            maxPqSize++;   
        }
       
    }
    
    double findMedian() {     
        
        if(maxPqSize==minPqSize)return (maxPq.top() + minPq.top())/2.0;
        return maxPq.top()/1.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
