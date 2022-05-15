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
    /*int leafsum(TreeNode* root, int h, int cnt, int sum)
    {
        if(!root)
            return sum;
        if(root->left==NULL&&root->right==NULL)
        {
            if(cnt==h)
            {
                sum+=root->val;
                return sum;
            }
            else
                return sum;
        }
        sum=leafsum(root->left, h, cnt+1, sum);
        sum=leafsum(root->right,h, cnt+1, sum);
        return sum;
    }
    
    int hight(TreeNode* root)
    {
      if(!root)
          return 0;
      int left=hight(root->left);
      int right=hight(root->right);
      int ans=max(left,right)+1;
      return ans;
    }*/
    
    int deepestLeavesSum(TreeNode* root) 
    {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int sum=0;
        int ans;
        while(!q.empty())
        {
            TreeNode* frontnode=q.front();
            q.pop();
            if(frontnode==NULL)
            {
                ans=sum;
                sum=0;
                if(!q.empty())
                  q.push(NULL);
            }
            else
            {
                sum+=frontnode->val;
                if(frontnode->left)
                q.push(frontnode->left);
                if(frontnode->right)
                q.push(frontnode->right);
            }
        }
        return ans;
    }
};