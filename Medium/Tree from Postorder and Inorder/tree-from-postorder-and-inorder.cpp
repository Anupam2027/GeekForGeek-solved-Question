//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
int find(int in[],int target,int start ,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(in[i]==target)
            return i;
        }
        return -1;
    }
    Node * tree(int in[],int post[],int instart,int inend,int index)
    {
        if(instart>inend)
        return NULL;
        Node * root=new Node(post[index]);
        int pos=find(in,post[index],instart,inend);
        //right
        root->right=tree(in,post,pos+1,inend,index-1);
        //left
        root->left=tree(in,post,instart,pos-1,index-(inend-pos)-1);
        return root;
        
    }

//Function to return a tree created from postorder and inoreder traversals.

  Node *buildTree(int in[], int post[], int n) {
    return tree(in,post,0,n-1,n-1); 
}
