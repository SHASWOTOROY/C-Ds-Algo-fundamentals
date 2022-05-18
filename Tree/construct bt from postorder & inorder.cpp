// construct bt from postorder & inorder
#include <bits/stdc++.h>
using namespace std;
struct node
{

    int data;
    struct node*left;
    struct  node *right;
    node(int val)
    {
        data=val;

        right=NULL;
        left=NULL;


    }

};
int search(int inorder[], int s, int e, int val)
{

    for(int i=s; i<=e; i++)
    {
        if(inorder[i]==val)
        {
            return i;
        }
    }
    return -1;

}
node *buildtree(int postorder[], int inorder[], int s, int e)
{

    static int idx=4;
    if(s>e)
    {
        return NULL;
    }
    int val=postorder[idx];
    idx--;
    node *cur= new node(val);
    if(s==e)
    {
        return cur;
    }
    int pos=search(inorder, s,  e, val);
    cur->right=buildtree(postorder, inorder, pos+1,e);
    cur->left=buildtree(postorder,inorder,s,pos-1);
    return cur;
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

    int postorder[]= {2,4,1,3,5};
    int inorder[]= {5,4,3,2,1};
    node *root=buildtree(postorder,inorder,0,4);
    inorderprint(root);
    cout<<endl;

}
