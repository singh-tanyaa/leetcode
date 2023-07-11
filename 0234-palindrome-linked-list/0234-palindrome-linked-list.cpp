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
    bool isPalindrome(ListNode* head) {
       ListNode* slow=head;
         ListNode* fast;
        ListNode* prev=NULL;
        ListNode* temp;
        //find the middle of the linked list
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next; //YE GALTI ab ni krenge.........................
        }
        //reverse the back of the ll
       
           //ODD CASE :-----
        if(fast!=NULL && fast->next==NULL)
        {
            
            slow=slow->next;
        }
        
             
    while(slow and slow->next)
   {
    
            temp = slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
    }
       if(slow!=NULL )
            {
                slow->next=prev;
                fast=head;
            }
                    
        //comparison
        
        while(slow!=NULL && fast!=NULL)
        {
            if(slow->val != fast->val)
            
                return false;
            
            slow=slow->next;
            fast=fast->next;
        }
         return true;
             }
};