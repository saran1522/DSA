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
    // complete binary tree should not have any NULL node till the last non-NULL node, so if there is a NULL node comes(as temp) and queue has some non-NULL nodes left then it is not complete binary tree 
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>qu;
        qu.push(root);
        bool isNullNode=false;
        while(!qu.empty())
        {
            TreeNode* temp=qu.front();
            qu.pop();
            if(temp==NULL)
                isNullNode=true;
            else
            {
                if(isNullNode==true)
                    return false;
                qu.push(temp->left);
                qu.push(temp->right);
            }
        }
        return true;
    }
};