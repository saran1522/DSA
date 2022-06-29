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
    TreeNode* ancestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root)
            return NULL;
        if(root->val==p->val||root->val==q->val)
            return root;
        TreeNode* left=ancestor(root->left,p,q);
        TreeNode* right=ancestor(root->right,p,q);
        if(left&&right)
            return root;
        if(right)
            return right;
        if(left)
            return left;
        else
            return NULL;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return ancestor(root,p,q);
    }
};