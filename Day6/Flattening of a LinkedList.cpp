Node *flatten(Node *root)
{
   // Your code here
   Node* prevListHead = NULL;
   Node* nextList = NULL;

  while(root){

       nextList = root->next;
       root->next = NULL;
       Node* dummy = new Node(0);
       Node* curr = dummy;
       
       while(prevListHead && root){
           
           if(prevListHead->data <= root->data){
               dummy->bottom = prevListHead;
               prevListHead = prevListHead->bottom;
           }
           else{
               dummy->bottom = root;
               root = root->bottom;
           }
           dummy = dummy->bottom;
           
       }
       
       if(prevListHead)dummy->bottom = prevListHead;
       else if(root)dummy->bottom = root;
       
       
       prevListHead = curr->bottom;
       curr->bottom = NULL;
       curr->next = NULL;
       
       root = nextList;
 
  }
   
   return prevListHead;

 
}
