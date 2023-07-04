#include <bits/stdc++.h> 

class Heap{
    
    int arr[1000];
    int size;
    public:
    Heap(){
        size =0;
    }


    void insert(int val){
        size++;
        int ind = size;
        arr[ind] = val;

       

        while(ind > 1){
            int parent = ind/2;
            if(arr[parent] > arr[ind]){
                swap(arr[parent] , arr[ind]);
                ind = parent;
            }
            else break;
        }       
   
    }

    int pop(){
        if(size==0)return -1;
        
        int ind = 1;
        int deletedVal = arr[ind];
        swap(arr[ind],arr[size]);
        size--;


        while(ind<size){
            int leftChild = 2*ind;
            int rightChild = 2*ind+1;

            int smaller = ind;
            
            if(leftChild<=size && arr[leftChild] < arr[smaller]){
                smaller = leftChild;
            }

            if(rightChild <= size && arr[rightChild] < arr[smaller]){
                smaller = rightChild;
            }

            if(smaller == ind)break;   

            swap(arr[ind],arr[smaller]);
            ind = smaller; 
        }
       
        return deletedVal;          
   
    }

    
};

vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.

    Heap minHeap;

    vector<int> res;

    for(auto it : q){
        int type = it[0];

        if(type==0){
            minHeap.insert(it[1]);
        }
        else {
            res.push_back(minHeap.pop());
        }
    }
    return res;

    
}
