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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) return head;

        // Step 1: count total nodes
        ListNode* temp = head;
        int count=0;
        while (temp!=NULL) {
            count++;
            temp=temp->next;
        }

        // Step 2: find position from start (1-based index)
        int k = count-n+1;

        // Step 3: if we need to delete the head node
        if (k==1) {
           ListNode* temp=head;
           head=head->next;
           delete temp;
           return head;
        }

        // Step 4: move to the (k-1)th node
        ListNode* curr=head;
        int currPos=1;
        while (currPos < k - 1 && curr != NULL) {
            curr=curr->next;
            currPos++;
        }

        // Step 5: delete the kth node
        if (curr != NULL && curr->next != NULL) {
            ListNode* nodeToDelete = curr->next;
            curr->next = curr->next->next;
            delete nodeToDelete;
        }

        return head;
    }
};
