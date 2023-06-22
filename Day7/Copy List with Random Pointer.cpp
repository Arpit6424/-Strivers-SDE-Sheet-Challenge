/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(!head)return head;

        Node* newHead;        
        Node* temp = head;
        
        while(temp){
            Node* newNode = new Node(temp->val);
            
            newNode->next = temp->next;
            temp->next = newNode;            
            temp = newNode->next;
        }
        
        newHead = head->next;
        
        temp = head;        
       
        while(temp){
            
            if(temp->random)
             temp->next->random = temp->random->next;            
            temp =temp->next->next;              
        }
        
        temp = head;
        
        Node* nextNode = NULL;
        while(temp){
            
            nextNode = temp->next->next;
            
            if(nextNode)
                temp->next->next = nextNode->next;
            
            temp->next = nextNode;
            temp = nextNode;    
}
        return newHead;
        
    }
};
