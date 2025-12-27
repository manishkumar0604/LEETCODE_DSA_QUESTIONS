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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0, head);
        ListNode* prev=dummy; 

        while (head) {
            // If current value is duplicated
            if (head->next && head->val == head->next->val) {
                int val=head->val;
                // Skip all nodes with same value
                while(head && head->val == val)
                    head=head->next;
                prev->next=head;       // remove block of duplicates
            } else {
                prev = head;             // move prev when no duplicate found
                head = head->next;
            }
        }
        return dummy->next;
    }
};