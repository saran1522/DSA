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
    void solve(TreeNode* root, int maxVal, int &cnt)
    {
        if(!root)
            return;
        if(root->val>=maxVal)
            cnt++;
        maxVal=max(maxVal,root->val);
        solve(root->left, maxVal, cnt);
        solve(root->right, maxVal, cnt);
    }
    int goodNodes(TreeNode* root) {
        int cnt=0;
        solve(root,root->val,cnt);
        return cnt;
    }
};