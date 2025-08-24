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
        ListNode* prev=NULL;   //here intiallise prev pointer 
        ListNode* curr=head;    // current pointer
        ListNode* next=NULL;    //and next pointer

        while(curr!=NULL){         // loop run until current pointer reaches the null
            next=curr->next;    //next point initalize current of next
            curr->next=prev;    //current next reverse the direction so current next intailize with prev(null)

            prev=curr;          //after previous goes to current pointer
            curr=next;          // and current pointer goes to next pointer.
        }
        return prev;            //return previous because it points to null pointer 
        
    }
};