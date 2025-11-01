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
        // Since we don't have access to the head or previous node,
        // copy the value from the next node into the current one,
        // then delete the next node.

        node->val = node->next->val;          // Step 1: Copy next node's value
        ListNode* temp = node->next;          // Step 2: Store next node
        node->next = node->next->next;        // Step 3: Bypass next node
        delete temp;                          // Step 4: Delete skipped node
    }
};


// class Solution {
// public:
//     ListNode* deleteNode(ListNode* head, int node) {
//         if (head == NULL) return NULL;

//         // If head node is to be deleted
//         if (head->val == node) {
//             ListNode* temp = head;
//             head = head->next;
//             delete temp;
//             return head;
//         }

//         ListNode* temp = head;
//         ListNode* prev = NULL;

//         // Traverse the list to find the node to delete
//         while (temp != NULL) {
//             if (temp->val == node) {
//                 prev->next = temp->next;
//                 delete temp;
//                 break;
//             }
//             prev = temp;
//             temp = temp->next;
//         }

//         return head;
//     }
// };
