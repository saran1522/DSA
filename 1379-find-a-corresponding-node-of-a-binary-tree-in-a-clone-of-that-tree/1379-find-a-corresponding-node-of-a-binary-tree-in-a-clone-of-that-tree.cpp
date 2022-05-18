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
    TreeNode* solve(TreeNode* origin, TreeNode* clon, TreeNode* target)
    {
        if(!origin)
            return NULL;
        if(origin==target)
            return clon;
        TreeNode* ans=NULL;
        ans=solve(origin->left, clon->left, target);
        if(ans!=NULL)
            return ans;
        ans=solve(origin->right, clon->right, target);
        return ans;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
       return solve(original, cloned, target);
    }
};