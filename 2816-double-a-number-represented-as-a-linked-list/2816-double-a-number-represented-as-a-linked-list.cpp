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
    ListNode* doubleIt(ListNode* head) {
        vector<int>nodes;
        ListNode* temp = head;
        while(temp != NULL){
            nodes.push_back(temp->val);
            temp = temp->next;
        }
        
        int carry =0;
        for(int i=nodes.size()-1;i>=0;--i){
            int res = nodes[i]*2 + carry;
            nodes[i] = res%10;
            carry = res/10;
        }
        
        ListNode* newHead = new ListNode(nodes[0]);
        temp = newHead;
            
        for(int i=1;i<nodes.size();++i){
            temp->next = new ListNode(nodes[i]);
            temp = temp->next;
        }
        if(carry != 0){
            ListNode* newNode = new ListNode(carry);
            newNode->next = newHead;
            newHead = newNode;
        }
            return newHead;
    }
};