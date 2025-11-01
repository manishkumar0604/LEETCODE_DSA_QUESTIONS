class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(), nums.end());

        // Remove matching nodes from the head
        while (head !=NULL&& st.count(head->val)) {
            head=head->next;
        }

        // Traverse and skip nodes that should be removed
        ListNode* curr = head;
        while (curr !=NULL && curr->next !=NULL) {
            if (st.count(curr->next->val)) {
                curr->next = curr->next->next;  // skip the node
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};
