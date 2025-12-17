class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        // find mid
        ListNode *slow = head, *fast = head->next;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;

        // split
        ListNode* mid = slow->next;
        slow->next = nullptr;

        // sort halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        // merge
        ListNode dummy(0), *cur = &dummy;
        while (left && right) {
            if (left->val < right->val)
                cur->next = left, left = left->next;
            else
                cur->next = right, right = right->next;
            cur = cur->next;
        }
        cur->next = left ? left : right;

        return dummy.next;
    }
};
