#include <bits/stdc++.h>
using namespace std;
template <typename t>
class tree
{

public:
    int data;
    vector<tree<t>*>child;
    tree (int data)
    {
        this->data=data;
    }

};
void printtree(tree<int>*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    for(int i=0; i<root->child.size(); i++)
    {
        cout<<root->child[i]->data<<",";
    }
    cout<<endl;
    for(int i=0; i<root->child.size(); i++)
    {
        printtree(root->child[i]);
    }
}

tree<int>*levelwise()
{
    int rootdata;
    cout<<"enter the root data"<<endl;
    cin>>rootdata;

    tree<int>*root= new tree<int>(rootdata);
    queue<tree<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        tree<int>*f=q.front();
        q.pop();
        cout<<"enter no of the child "<<f->data<<endl;
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int childdata;
            cout<<"enter "<<i<<" th child of "<<f->data<<endl;
            cin>>childdata;
            tree<int>*children= new tree<int>(childdata);
            q.push(children);
            f->child.push_back(children);
        }

    }
    return root;

}
int countnode(tree<int>*root)
{

    int ans=1;
    for(int i=0; i<root->child.size(); i++)
    {
        ans=ans+countnode(root->child[i]);
    }
    return ans;
}

int main()
{

    /*tree<int>*root=new tree<int>(1);
    tree<int>*n1= new tree<int>(2);

    tree<int>*n2= new tree<int>(3);
    root->child.push_back(n1);
    root->child.push_back(n2);*/
    tree<int>*root=levelwise();
    cout<<countnode(root)<<endl;
    printtree(root);

}