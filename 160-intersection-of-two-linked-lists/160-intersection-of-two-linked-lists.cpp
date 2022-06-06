/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=0,lenB=0;
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        while(tempA!=NULL)
        {
            lenA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL)
        {
            lenB++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
            while(lenA>lenB)
            {
                tempA=tempA->next;
                lenA--;
            }
            while(lenB>lenA)
            {
                tempB=tempB->next;
                lenB--;
            }
            while(tempA!=NULL && tempB!=NULL)
            {
                if(tempA==tempB)
                    return tempA;
                tempA=tempA->next;
                tempB=tempB->next;
            }
        return NULL;
    }
};