/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void height(TreeNode* root, int &ans, int &maxDepth, int depth){
        if(!root)
             return;
        
        height(root->left,ans, maxDepth, depth+1);
        height(root->right,ans, maxDepth, depth+1);
        
        if(depth>maxDepth){
            maxDepth = depth;
            ans = root->val;
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        if(!root->left && !root->right)
            return root->val;
        int ans =0, maxDepth=0;
        height(root, ans, maxDepth, 0);
        return ans;
    }
};