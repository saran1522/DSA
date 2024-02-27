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
    // make a result variable and pass it by referance bec it will store the res
    // if root is null then reuturn 0
    // find nodes in right side of the root and left side of the root
    // the diameter can be longest at any point (if without including root the sum of left and right part is greater) so we will store max of diameter (left + right) and prev res in the res
    // now we have to send the length of longer side to the node above
    // so will return max(left, right) +1 (+1 of the node itself)
    int nodes(TreeNode* root, int &res){
        if(!root)
            return 0;
        int left = nodes(root->left,res);
        int right = nodes(root->right,res);
        int sum = left + right;
        res = max(res,sum);
        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        nodes(root, res);
        return res;
    }
};