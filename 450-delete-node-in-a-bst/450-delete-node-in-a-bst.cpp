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
    TreeNode* getMini(TreeNode* root)
    {
        /*if(!root->left&&!root->right)
            return root;
        if(root->left)
            return getMini(root->left);
        else
            return root;*/
        TreeNode* temp=root;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return root;
        if(root->val==key){
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        else if(!root->left&&root->right)
        {
            TreeNode* temp=root->right;
            delete root;
            return temp;
        }
        else if(!root->right&&root->left)
        {
            TreeNode* temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left&&root->right)
        {
            int mini=getMini(root->right)->val;
            root->val=mini;
            root->right=deleteNode(root->right,mini);
        }
        }
        else if(root->val<key)
            root->right= deleteNode(root->right,key);
        else 
            root->left= deleteNode(root->left,key);
        return root;
    }
};