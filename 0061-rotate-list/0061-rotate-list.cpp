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
    int sizeo(ListNode* head) {
        int n = 0;
        while (head != NULL) {
            n++;
            head = head->next;
        }
        return n;
    };

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return head;
        }
        
   int n = sizeo(head);
       
        int loop = k % n;
        loop = n - loop;
         if (n == 1 || loop == n) {
            return head;
        }


        ListNode* temp = head;
        ListNode* firstadd = head;

        int j = 0;
        while (temp != NULL) {
            j++;
            if (j == loop) {
                if (temp->next != NULL) {
                    firstadd = temp->next;
                    temp->next = NULL;
                }
                break;
            }
            temp = temp->next;
        }

        temp = firstadd;
        while (temp != NULL && temp->next != NULL) {
            temp = temp->next;
        }

        if (temp != NULL) {
            temp->next = head;
        }

        return firstadd;
    }
};
