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
    int givePos(int ele,vector<int>inorder)
    {
        for(int i=0;i<inorder.size();++i)
        {
            if(inorder[i]==ele)
                return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &preInd, int inSind,int inEind)//, unordered_map<int,int>eleInd )
    {
        if(preInd>=preorder.size()||inSind>inEind)
            return NULL;
        
        int element=preorder[preInd];
        preInd+=1;
        TreeNode* root=new TreeNode(element);
        int pos=givePos(element,inorder);
        root->left=solve(preorder,inorder,preInd,inSind,pos-1);//,eleInd);
        root->right=solve(preorder,inorder,preInd,pos+1,inEind);//,eleInd);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preInd=0;
        //unordered_map<int,int>eleInd;
        //linkMap(inorder,eleInd);
        TreeNode* ans= solve(preorder,inorder,preInd,0,inorder.size()-1);//,eleInd);
        return ans;
    }
};