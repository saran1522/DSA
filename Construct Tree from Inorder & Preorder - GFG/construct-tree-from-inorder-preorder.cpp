// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int givePos(int ele,int in[],int n)
    {
        for(int i=0;i<n;++i)
        {
            if(in[i]==ele)
                return i;
        }
        return -1;
    }
    Node* solve(int pre[],int in[],int &preInd, int inSind,int inEind,int n)
    {
        if(preInd>=n||inSind>inEind)
            return NULL;
        
        int element=pre[preInd++];
        Node* root=new Node(element);
        int pos=givePos(element,in,n);
        
        root->left=solve(pre,in,preInd,inSind,pos-1,n);
        root->right=solve(pre,in,preInd,pos+1,inEind,n);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preInd=0;
        Node* ans= solve(pre,in,preInd,0,n-1,n);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends