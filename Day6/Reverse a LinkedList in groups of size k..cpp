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
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* newHead = NULL;
        ListNode* curr = head;        
        ListNode* prevListLastNode = NULL;
        
        while(curr){     
            ListNode* temp = curr;
            int kk = k-1;
            while(kk-- && temp){
                temp = temp->next;
            }            
            if(!temp){
                if(prevListLastNode)prevListLastNode->next = curr;
                break;
            }
           
            ListNode* nextListHead = temp->next;            
            ListNode* currListHead = curr;
            ListNode* prev = NULL;
            ListNode* nextNode = NULL;
            
            kk = k;            
            while(kk--){
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }
            
            if(newHead==NULL)newHead = prev;
            
            if(prevListLastNode){
                prevListLastNode->next = prev;
            }
            prevListLastNode = currListHead;
            
            curr = nextListHead;     
        }
        return newHead;
        
    }
};
