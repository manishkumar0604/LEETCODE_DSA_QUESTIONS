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
    ListNode* reverseLL(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseLL(head->next);
        head->next->next = head;   // ✅ connect the next node back to head
        head->next = NULL;         // ✅ break the original link
        return newHead;
    }

public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Step 1: Find middle (slow will end at the midpoint)
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half
        ListNode* secondHead = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* second = secondHead;

        // Step 3: Compare both halves
        bool palindrome = true;
        while (second != NULL) {
            if (first->val != second->val) {
                palindrome = false;
                break;
            }
            first = first->next;
            second = second->next;
        }

        // Step 4: Restore the list (optional)
        slow->next = reverseLL(secondHead);

        return palindrome;
    }
};
