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
    // put a pointer on a and a pointer on b
    // link a->next to the head of list 2
    // put a pointer temp = last node of the list2
    // linke temp->next = b
    // so lists will be merged as desired
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* start = list1, *end = list1, *temp = list2;
        a -= 1;
        b += 1;
        
        while(a--) start = start->next;
        
        while(b--) end = end->next;
        
        while(temp->next != NULL) temp = temp->next;
        
        start->next = list2;
        temp->next = end;
        
        return list1;
    }
};