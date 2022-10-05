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
    
    TreeNode* addOneRow(TreeNode* root, int v, int d, bool isLeft = true) {
        if ( d == 1 )
        {
            TreeNode *left = isLeft? root : NULL, *right = isLeft? NULL : root;
            return new TreeNode(v, left, right);
        }
            
        if ( root )
        {
            root->left = addOneRow(root->left, v, d - 1);
            root->right = addOneRow(root->right, v, d - 1, false);
        }
            
        return root;
    }
    /*void solve(TreeNode* &root, int val, int depth)
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
        solve(root->left,val,--depth);
        solve(root->right,val,--depth);
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
    }*/
};