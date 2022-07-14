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
    TreeNode* solve(vector<int>pre,vector<int>in,int &preInd, int inStInd,int inEndInd)
    {
        if(preInd>=pre.size()||inStInd>inEndInd)
            return NULL;
        int ele=pre[preInd++];
        TreeNode* root=new TreeNode(ele);
        int pos=givePos(in,ele);
        cout<<"Pos: "<<pos<<"   ";
        root->left=solve(pre,in,preInd,inStInd,pos-1);
        root->right=solve(pre,in,preInd,pos+1,inEndInd);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int preInd=0;
        TreeNode* ans=solve(pre,in,preInd,0,in.size()-1);
        return ans;
    }
};