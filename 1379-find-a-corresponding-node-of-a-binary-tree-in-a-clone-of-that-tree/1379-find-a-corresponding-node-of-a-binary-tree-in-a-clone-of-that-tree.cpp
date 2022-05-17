/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* solve(TreeNode* clon, TreeNode* target)
    {
        if(!clon)
            return NULL;
        if(clon->val==target->val)
            return clon;
        TreeNode* ans=NULL;
        ans=solve(clon->left, target);
         if(ans!=NULL)
             return ans;
        ans=solve(clon->right, target);
             return ans;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
       return solve(cloned, target);
    }
};