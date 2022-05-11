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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0)
            return head;
        if(!head)
            return 0;
        int len=0;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            len++;
            temp=temp->next;
        }
        len++;
        if(len==k)
            return head;
        temp->next=head;
        temp=temp->next;
        if(k>len)
        {
          int i=(k/len)+1;
          len=(i*len)-k;
          while(len>1)
          {
            len--;
            temp=temp->next;
          }
        }
        else
        {
          len=len-k;
          while(len>1)
          {
            len--;
            temp=temp->next;
           }
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};