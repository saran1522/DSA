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
    int nodes(TreeNode* root, int &res){
        if(!root)
            return 0;
        int left = 1+nodes(root->left,res); // at 1 => 1 + 2 =3
        int right = 1+nodes(root->right,res); // at 1 => 1 +1 =2
        int sum = left + right - 1; // at 2 => 3 + 2 -1 = 4
        res = max(res,sum);
        cout<<root->val<<" "<<res<<endl;
        int ans = left>right?left:right; // 3
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        int x = nodes(root, res);
        return res-1;
    }
};