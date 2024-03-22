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
    ListNode* getMid(ListNode* head, int len)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        ListNode* prev=NULL;
        while(fast!=NULL)
        {
            prev=slow;
            fast=fast->next;
            if(fast!=NULL)
               fast=fast->next;
            slow=slow->next;
        }
        if(len%2==0)
            return prev;
        else
            return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forword = NULL;
         while(curr!=NULL)
         {
             forword=curr->next;
             curr->next=prev;
             prev=curr;
             curr=forword;
             
         }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(!head->next)
            return true;
        
        int len=0;
        ListNode* length=head;
        while(length)
        {
            len++;
            length=length->next;
        }
        
        ListNode* mid=getMid(head,len);
        ListNode* temp=mid->next;
        mid->next=reverse(temp);
        ListNode* first=head;
        ListNode* sec=mid->next;
        while(sec)
        {
            if(first->val != sec->val)
                return false;
            first=first->next;
            sec=sec->next;
        }
        
        return true;
    }
};