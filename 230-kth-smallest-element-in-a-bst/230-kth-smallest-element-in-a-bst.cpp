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
    
    void inorder(TreeNode* root , int &k, int &pos, int &ans)
    {
        if(!root)
            return;
        
        inorder(root -> left, k, pos, ans);
        pos++;
        if(pos == k)
        {
            ans = root -> val;
            return;
        }
        
        inorder(root -> right, k, pos, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        //inorder of bst is sorted
        //so do inotrder traverse on tree and keep count of nodes
        //kth node is the ans
        int pos = 0, ans =0;
        inorder(root, k, pos, ans);
        return ans;
    }
};