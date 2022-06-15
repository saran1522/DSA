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
        
        if(head==NULL || head->next==NULL)
            return head;
        
        //queue<ListNode*>qu;
        ListNode* temp=head;
        head= new ListNode(-1);
        ListNode* tail=head;
        ListNode* newHead=new ListNode(-1);
        ListNode* newTail=newHead;
        
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                tail->next=new ListNode(temp->val);\
                tail=tail->next;
            }
            
            else
            {
                newTail->next=new ListNode(temp->val);
                newTail=newTail->next;
            }
            
            temp=temp->next;
        }
        
        newTail->next=NULL;
        tail->next=newHead->next;
        head=head->next;
        return head;
    }
};