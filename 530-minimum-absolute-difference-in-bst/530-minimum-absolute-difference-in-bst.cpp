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
    void minDiff(TreeNode* root, int &diff, int &preVal)
    {
        if(!root)
            return;
        minDiff(root->left,diff,preVal);
        diff=min(diff,abs(preVal-root->val));
        preVal=root->val;
        minDiff(root->right,diff,preVal);
    }
    int getMinimumDifference(TreeNode* root) {
        int diff=INT_MAX,preVal=INT_MAX;
        minDiff(root,diff,preVal);
        return diff;
    }
};