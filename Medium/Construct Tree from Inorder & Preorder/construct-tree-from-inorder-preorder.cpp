//{ Driver Code Starts
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
    int find(int in[],int target,int start ,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(in[i]==target)
            return i;
        }
        return -1;
    }
    Node * tree(int in[],int pre[],int instart,int inend,int index)
    {
        if(instart>inend)
        return NULL;
        Node * root=new Node(pre[index]);
        int pos=find(in,pre[index],instart,inend);
        //left
        root->left=tree(in,pre,instart,pos-1,index+1);
        //right
        root->right=tree(in,pre,pos+1,inend,index+(pos-instart)+1);
        return root;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
       return tree(in,pre,0,n-1,0); 
    }
};

//{ Driver Code Starts.
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