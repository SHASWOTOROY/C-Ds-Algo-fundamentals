// construct bt from preorder & inorder
#include <bits/stdc++.h>
using namespace std;
struct node
{

    int data;
    struct node* left;
    struct node*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

};

int search(int inorder[], int s, int e, int cur)
{

    for(int i=s; i<=e; i++)
    {
        if(inorder[i]==cur)
        {
            return i;
        }
    }
    return -1;

}
node *buildtree(int preorder[],int inorder[], int s, int e)
{

    static int idx=0;
    if(s>e)
    {
        return NULL;
    }
    int cur= preorder[idx];
    idx++;
    node *n1= new node(cur);
    if(s==e)
    {
        return n1;
    }

    int pos= search(inorder,s,e,cur);
    n1->left= buildtree(preorder, inorder,s,pos-1);
    n1->right=buildtree(preorder,inorder,pos+1,e);

    return n1;

}
void inorderprint(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}
int main()
{

    int inorder[]= {1,2,4,3,5};
    int preorder[]= {4,2,1,5,3};
    node *root=buildtree(preorder, inorder,0,4);
    inorderprint(root);
}


