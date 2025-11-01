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
    void deleteNode(ListNode* node) {
        // Copy value from next node to current node
        node->val = node->next->val;

        // Store next node
        ListNode* temp = node->next;

        // Skip over the next node
        node->next = node->next->next;

        // Delete the skipped node
        delete temp;
    }
};
