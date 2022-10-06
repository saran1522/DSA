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
    void solve(TreeNode* &root, int val, int depth)
    {
        if(!root)
            return;
        if(depth==1)
        {
            TreeNode* tempLeft=new TreeNode(val);
            TreeNode* tempRight=new TreeNode(val);
            tempLeft->left=root->left;
            tempRight->right=root->right;
            root->left=tempLeft;
            root->right=tempRight;
            return;
        }
        solve(root->left,val,depth-1);
        solve(root->right,val,depth-1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* temp=new TreeNode(val);
            temp->left=root;
            return temp;
        }
        solve(root,val,depth-1);
        return root;
    }
};