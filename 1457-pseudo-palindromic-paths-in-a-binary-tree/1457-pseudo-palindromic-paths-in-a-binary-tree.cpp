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
    bool checkPalindrome(vector<int>v){
        int odd_cnt=0,even_cnt=0;
        for(auto &i:v)
        {
            if(i&1)
                odd_cnt++;
            else
                even_cnt++;
        }
        if(odd_cnt==0 || odd_cnt==1)
            return true;
        else
            return false;
    }
    void checkPath(TreeNode* root,vector<int>v, int &cnt){
        if(!root)
            return;
        
        if(!root->left && !root->right)
        {
            v[root->val]++;
            if(checkPalindrome(v))
               cnt++;
            for(int j=0;j<=9;++j)
                v[j]=0;
            return;
        }
        
        v[root->val]++;
        checkPath(root->left,v,cnt);
        checkPath(root->right,v,cnt);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root->left && !root->right)
            return 1;
        int cnt=0;
        vector<int>v(10,0);
        checkPath(root,v,cnt);
        return cnt;
    }
};