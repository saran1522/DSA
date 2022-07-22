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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small=new ListNode(-1);
        ListNode* smallhead=small;
        ListNode* big=new ListNode(-1);
        ListNode* bighead=big;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                small->next=temp;
                small=small->next;
            }
            else if(temp->val>=x)
            {
                big->next=temp;
                big=big->next;
            }
            temp=temp->next;
        }
        big->next=NULL;
        bighead=bighead->next;
        small->next=bighead;
        smallhead=smallhead->next;
        return smallhead;
    }
};