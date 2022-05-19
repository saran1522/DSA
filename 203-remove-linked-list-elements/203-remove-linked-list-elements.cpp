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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL&&head!=NULL)
        {
            if(head->val==val)
            {
                ListNode* newnode=head;
                head=head->next;
                temp=temp->next;
                newnode->next=NULL;
                delete newnode;
            }
            else if(temp->val==val)
            {
                ListNode* newnode=temp;
                prev->next=temp->next;
                temp=temp->next;
                newnode->next=NULL;
                delete newnode;
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};