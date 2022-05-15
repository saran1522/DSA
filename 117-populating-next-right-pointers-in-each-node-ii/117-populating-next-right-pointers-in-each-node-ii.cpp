/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            if(temp==NULL)
            {
                q.push(NULL);
                if(q.front()==NULL)
                    break;
            }
            else
            {
              temp->next=q.front();
              if(temp->left)
                q.push(temp->left);
              if(temp->right)
                q.push(temp->right);
            }
        }
        return root;
    }
};