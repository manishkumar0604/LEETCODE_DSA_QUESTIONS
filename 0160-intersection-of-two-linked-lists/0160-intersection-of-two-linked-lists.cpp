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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //store node in map.
        unordered_map<ListNode* ,int> mpp;
        ListNode* temp=headA;
        while(temp!=NULL)
        {
            mpp[temp]=1;
            temp=temp->next;
        }
        //check the same node revisited or not if visited then return node.
        temp=headB;
        while(temp!=NULL)
        {
            if(mpp.find(temp)!=mpp.end()) return temp; // visited node return .
            temp=temp->next;
        }
        return NULL;
    }
};