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
    ListNode* reverseList(ListNode* head) {
        ListNode * temp=head;
        stack<int> st;
        //push all the element into the stack
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;  // reintialized temp to starting head node
        //push all stack element into LL.
        while(temp!=NULL)
        {
            temp->val=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
    }
};