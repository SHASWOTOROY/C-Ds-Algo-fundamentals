/// binary tree at max 2 child
#include <bits/stdc++.h>
using namespace std;
template <typename t>
struct binarytree
{
//public:
    int data;
    binarytree *left;
    binarytree *right;

    binarytree(int val)
    {
        data=val;
        right=NULL;
        left=NULL;

    }
    ~binarytree()
    {

        delete left;
        delete right;
    }

};
// take recursive input
binarytree<int>*takeinput()
{

    int rootdata;
    cout<<"enter the root data"<<endl;
    cin>>rootdata;
    if(rootdata==-1)
    {
        return NULL;
    }
    binarytree<int>*root=new binarytree<int>(rootdata);
    root->left=takeinput();
    root->right=takeinput();
    return root;

}
void print( binarytree<int>*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" : " ;
    if(root->left!=NULL)
    {
        cout<<"L->"<<root->left->data;

    }
    if(root->right!=NULL)
    {
        cout<<" R->"<<root->right->data;

    }
    cout<<endl;
    print(root->left);
    print(root->right);

}
int countnode(binarytree<int>*root)
{
    if(root==NULL)
    {
        return 0;
    }

    return countnode(root->left)+countnode(root->right)+1;
}
int countleaf(binarytree<int>*root)
{

    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL){
        return 1;
    }
    return countleaf(root->left)+countleaf(root->right);


}



//  1 2 4 -1 -1 5 -1 -1 3 6 8 -1 -1 9 -1 -1 7 -1 -1
int main()
{
    /*binarytree<int>*root=new binarytree<int>(1);
    binarytree<int>*n1=new binarytree<int>(2);
    binarytree<int>*n2=new binarytree<int>(3);
    root->left=n1;
    root->right=n2;*/
    binarytree<int>*root=takeinput();
    cout<<"num of nodes "<<countnode(root)<<endl;
    cout<<"num of leaf "<<countleaf(root)<<endl;
    print(root);
    delete root;



}

