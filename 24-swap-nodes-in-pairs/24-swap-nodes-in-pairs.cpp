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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        queue<ListNode*>qu;
        while(fast!=NULL && slow!=NULL)
        {
            qu.push(fast);
            qu.push(slow);
            slow=fast->next;
            if(slow!=NULL)
            fast=slow->next;
        }
        if(slow!=NULL)
            qu.push(slow);
        head=qu.front();
        qu.pop();
        ListNode* temp=head;
        while(!qu.empty())
        {
            temp->next=qu.front();
            qu.pop();
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};