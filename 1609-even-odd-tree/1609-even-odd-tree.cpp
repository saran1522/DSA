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
    bool isEvenOddTree(TreeNode* root) {
        int level =0;
        vector<int>values;
        queue<TreeNode*>qt;
        qt.push(root);
        qt.push(NULL);
        while(!qt.empty()){
            TreeNode* temp = qt.front();
            qt.pop();
            if(temp==NULL){
                if(!qt.empty())
                    qt.push(NULL);
                
                if(level %2==0){
                    int prevVal = 0;
                    for(int i=0;i<values.size();++i){
                        if(values[i]%2==0 || values[i]<=prevVal)
                            return false;
                        prevVal = values[i];
                    }
                    
                }
                else{
                    int prevVal = INT_MAX;
                    for(int i=0;i<values.size();++i){
                        if(values[i]%2!=0 || values[i]>=prevVal)
                            return false;
                        prevVal = values[i];
                    }
                    
                }
                // if(values.size()==1 && values[0]%2 == level%2)
                //     return false;
                values.clear();
                level++;
            } 
            else{
                values.emplace_back(temp->val);
                if(temp->left)
                    qt.push(temp->left);
                if(temp->right)
                    qt.push(temp->right);
            }
        }
        return true;
    }
};