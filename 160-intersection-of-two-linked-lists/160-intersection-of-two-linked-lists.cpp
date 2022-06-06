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
        int lenA=0,lenB=0,len=0;
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
        if(lenA>lenB)
        {
            len=lenA-lenB;
            tempA=headA;
            tempB=headB;
            while(len--)
                tempA=tempA->next;
        }
        else
        {
            len=lenB-lenA;
            tempA=headA;
            tempB=headB;
            while(len--)
                tempB=tempB->next;
        }
            while(tempA!=NULL&&tempB!=NULL)
            {
                if(tempA==tempB)
                    return tempA;
                tempA=tempA->next;
                tempB=tempB->next;
            }
        return NULL;
    }
};