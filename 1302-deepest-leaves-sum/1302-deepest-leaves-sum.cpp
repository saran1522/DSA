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
    int leafsum(TreeNode* root, int h, int cnt, int sum)
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
    }
    
    int deepestLeavesSum(TreeNode* root) 
    {
      int h=hight(root);
      int ans=leafsum(root,h,1,0);
      return ans;
    }
};