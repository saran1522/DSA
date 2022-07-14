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
    int givePos(vector<int>in,int ele)
    {
        for(int i=0;i<in.size();++i)
        {
            if(in[i]==ele)
                return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>in,vector<int>post,int &postInd, int inStInd,int inEndInd)
    {
        if(postInd<0||inStInd>inEndInd)
            return NULL;
        int ele=post[postInd--];
        TreeNode* root=new TreeNode(ele);
        int pos=givePos(in,ele);
        root->right=solve(in,post,postInd, pos+1,inEndInd);
        root->left=solve(in,post,postInd, inStInd, pos-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int postInd=post.size()-1;
        TreeNode* ans=solve(in,post,postInd,0,in.size()-1);
        return ans;
    }
};