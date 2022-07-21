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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL)
            return head;
        
        ListNode* start=head;
        ListNode* prev=NULL;
        left-=1;
        bool b=true;
        if(left==0)
            b=false;
        right=right-left;
        while(left--)
        {
            prev=start;
            start=start->next;
        }
        stack<ListNode*>st;
        while(right--)
        {
            st.push(start);
            start=start->next;
        }
        
        ListNode* newhead= new ListNode(-1);
        ListNode* newnode=newhead;
        while(!st.empty())
        {
            ListNode* temp=st.top();
            st.pop();
            newhead->next=temp;
            newhead=newhead->next;
        }
        newhead->next=start;
        newnode=newnode->next;
        if(b==false)
            return newnode;
        prev->next=newnode;
        return head;
    }
};