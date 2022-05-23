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
    void reorderList(ListNode* head) {
        
        ListNode* temp=head;
        deque<ListNode*>dq;
        while(temp!=NULL)
        {
            dq.push_back(temp);
            temp=temp->next;
        }
        ListNode* newhead=new ListNode(-1);
        while(!dq.empty())
        {
            newhead->next=dq.front();
            dq.pop_front();
            newhead=newhead->next;
            if(!dq.empty())
            {
            newhead->next=dq.back();
            dq.pop_back();
            newhead=newhead->next;
            }
        }
        newhead->next=NULL;
    }
};