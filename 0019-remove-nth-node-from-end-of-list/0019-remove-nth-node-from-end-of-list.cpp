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
        if(!head->next)
            return NULL;
        ListNode* temp = head;
        ListNode* prev;
        int listLen = 0;
        while(temp!=NULL){
            temp=temp->next;
            listLen++;
        }
        if(n==listLen)
            return head->next;
        listLen -= n;
        temp = head; 
        while(listLen--){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};