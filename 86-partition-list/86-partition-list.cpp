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
        
        queue<ListNode*>qu;
        ListNode* temp=head;
        head= new ListNode(-1);
        ListNode* newTail=head;
        
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                newTail->next=new ListNode(temp->val);\
                newTail=newTail->next;
            }
            
            else
                qu.push(temp);
            
            temp=temp->next;
        }
        
        while(!qu.empty())
        {
            newTail->next=qu.front();
            newTail=newTail->next;
            qu.pop();
        }
        
        newTail->next=NULL;
        head=head->next;
        return head;
    }
};