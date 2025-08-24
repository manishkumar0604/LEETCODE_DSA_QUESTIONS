/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;

        bool isCycle=false;
        while(fast!=NULL && fast->next!=NULL)  // this loop detect loop or not 
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                isCycle=true;
                break;
            }
        }

        if(!isCycle)            // if not cycle form then return null.
            return NULL;

        slow=head;              // if cucle form then slow further intialize to head
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;     // it return the index where loop formed
        
    }
};