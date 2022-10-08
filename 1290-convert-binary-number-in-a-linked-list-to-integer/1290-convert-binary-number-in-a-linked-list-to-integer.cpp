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
    ListNode* reverse(ListNode* head)
    {
        if(!head->next)
            return head;
        ListNode* curr=head->next;
        ListNode* prev=head;
        ListNode* forward=curr->next;
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=forward;
            if(forward)
                forward=forward->next;
        }
        head->next=NULL;
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        
        ListNode* temp=reverse(head);
        int pow=1;
        int ans=0;
        while(temp!=NULL)
        {
            if(temp->val==1)
            ans=ans+(pow);
            pow=pow*2;
            temp=temp->next;
        }
        return ans;
    }
};