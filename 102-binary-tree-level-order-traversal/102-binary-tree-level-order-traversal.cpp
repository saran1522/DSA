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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)
            return ans;
        vector<int>v;
        queue<TreeNode*>nodes;
        nodes.push(root);
        nodes.push(NULL);
        while(!nodes.empty())
        {
            TreeNode* temp=nodes.front();
            nodes.pop();
            if(temp==NULL)
            {
                ans.push_back(v);
                v.clear();
                if(!nodes.empty())
                    nodes.push(NULL);
            }
            else
            {
                v.push_back(temp->val);
                if(temp->left)
                    nodes.push(temp->left);
                if(temp->right)
                    nodes.push(temp->right);
            }
        }
        return ans;
    }
};