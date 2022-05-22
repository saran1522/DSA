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
        int len1=0,len2=0;
        ListNode* temp=l1;
        
        while(temp!=NULL)
        {
            len1++;
            temp=temp->next;
        }
        
        temp=l2;
        while(temp!=NULL)
        {
            len2++;
            temp=temp->next;
        }
        
        if(len2>len1)
        {
           temp=l1;
           l1=l2;
           l2=temp;
        }
        
        int sum=0,carry=0;
        temp=l1;
        while(temp!=NULL)
        {
            if(l2!=NULL)
            {
              sum=temp->val+l2->val+carry;
              cout<<"sum: "<<sum<<endl;
              temp->val=sum%10;
              if(sum>=10)
                  carry=1;
              else
                  carry=0;
              l2=l2->next;
             }
            else
            {
              sum=temp->val+carry;
              temp->val=sum%10;
              if(sum>=10)
                  carry=1;
              else
                  carry=0;
            }
            if(temp->next==NULL)
                break;
            temp=temp->next;
        }
        
        if(carry>0)
           temp->next=new ListNode(carry); 
        
        return l1;
    }
};