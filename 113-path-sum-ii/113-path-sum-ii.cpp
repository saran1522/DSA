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
    void solve(TreeNode* root, vector<vector<int>>&ans, vector<int>path, int sum, int t)
    {
        if(!root)
            return;
        if(!root->left && !root->right)
        {
           sum+=root->val;
           path.emplace_back(root->val);
           if(sum==t)
              ans.emplace_back(path);
           path.clear();
        }
        path.emplace_back(root->val);
        solve(root->left,ans,path,sum+root->val,t);
        solve(root->right,ans,path,sum+root->val,t);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<vector<int>>ans;
        vector<int>path;
        int sum=0;
        solve(root, ans, path, sum, t);
        return ans;
    }
};