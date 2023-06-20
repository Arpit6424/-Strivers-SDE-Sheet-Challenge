/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    
    int getLength(ListNode* head){
        
        int length = 0;
        ListNode* temp = head;
        
        while(temp){
            length++;
            temp = temp->next;            
        }
        return length;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len = getLength(head);
        
        if(len==n)return head->next;
        int req = len-n-1;
        
        ListNode* requiredNode = NULL;
        ListNode* temp = head;
        while(temp && req--){
            
            temp = temp->next;
        }
        
       
        if(temp && temp->next)
         temp->next = temp->next->next;
        return head;
        
    
        
    }
};
