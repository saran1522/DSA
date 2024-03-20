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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* start = list1, *end = list1, *temp = list2;
        // ListNode* end = list2;
        a -= 1;
        b += 1;
        while(a--)
            start = start->next;
        
        // cout<<start->val<<endl;
        while(b--)
            end = end->next;
        // cout<<end->val<<endl;
        while(temp->next != NULL)
            temp = temp->next;
        // cout<<temp->val<<endl;
        
        start->next = list2;
        temp->next = end;
        
        return list1;
        
    }
};