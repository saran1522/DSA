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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(head->next==NULL&&n==1)
           return NULL;
        int len=0,cnt=0;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        if(n==len)
        {
            head=head->next;
            return head;
        }
        temp=head;
        len=len-n;
        while(cnt<len)
        {
            prev=temp;
            temp=temp->next;
            cnt++;
        }
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
};