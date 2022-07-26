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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>nodes;
        nodes.push(root->left);
        nodes.push(root->right);
        while(!nodes.empty())
        {
            TreeNode* leftNode=nodes.front();
            nodes.pop();
            TreeNode* rightNode=nodes.front();
            nodes.pop();
            if(!rightNode && leftNode)
                return false;
            if(!leftNode && rightNode)
                return false;
            if(leftNode && rightNode)
            {
                if(leftNode->val!=rightNode->val)
                    return false;
                nodes.push(leftNode->left);
                nodes.push(rightNode->right);
                nodes.push(leftNode->right);
                nodes.push(rightNode->left);
            }
        }
        return true;
    }
};