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
    ListNode* middleNode(ListNode* head) {      //here we use fast&slow pointer for this question 
        ListNode* slow=head;               //slow pointer intialize at head pointer
        ListNode* fast=head;               //and fast pointer also intialize at head pointer

        while(fast!=NULL && fast->next!=0){     //loop run untill fast pointer reach null or next of fast pointer will be zero.
            slow=slow->next;                    //slow pointer increase 1 node
            fast=fast->next->next;              //fast pointer increase by 2 node
        }
        return slow;           // if faster pointer reach null or next of fast pointer is null then slow pointer will be middle of thelinkedlist.
    }
};