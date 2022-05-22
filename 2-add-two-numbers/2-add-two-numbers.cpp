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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(-1); 
        ListNode* head=temp;
        int sum=0,carry=0;
        while(l1!=NULL&&l2!=NULL)
        {
            sum=l1->val+l2->val+carry;
            if(sum>=10)
            {
              carry=sum/10;
              sum=sum%10;
            }
            else
                carry=0;
            ListNode* node=new ListNode(sum);
            temp->next=node;
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL)
        {
            while(l1!=NULL)
            {
                sum=l1->val+carry;
            if(sum>=10)
            {
              carry=sum/10;
              sum=sum%10;
            }
            else
                carry=0;
            ListNode* node=new ListNode(sum);
            temp->next=node;
            temp=temp->next;
            l1=l1->next;
            }
        }
        else if(l2!=NULL)
        {
            while(l2!=NULL)
            {
                sum=l2->val+carry;
            if(sum>=10)
            {
              carry=sum/10;
              sum=sum%10;
            }
            else
                carry=0;
            ListNode* node=new ListNode(sum);
            temp->next=node;
            temp=temp->next;
            l2=l2->next;
            }
        }
        if(carry>0)
        {
            ListNode* node=new ListNode(carry);
            temp->next=node;
            temp=temp->next;
        }
        temp->next=NULL;
        head=head->next;
        return head;
    }
};