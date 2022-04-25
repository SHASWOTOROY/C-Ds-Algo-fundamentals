#include <bits/stdc++.h>
using namespace std;
class node
{

public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;

    }


};
void print(node *head)
{

    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

void insertathead (node* &head, int val)
{
    node *n =new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }

    head=n;


}
void inserattail(node* &head, int val)
{

    if(head==NULL)
    {
        insertathead(head,val);
        return;
    }

    node*n=new node(val);
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteathead(node* &head)
{
    node *todelet=head;
    head=head->next;
    head->prev=NULL;

    delete todelet;

}
void deletion(node* &head, int pos)
{
    if(pos==1)
    {
        deleteathead(head);
        return;
    }
    node *temp=head;
    int count=1;
    while(count!=pos&&temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }

    delete temp;

}

int main()
{
    node *head=NULL;

    inserattail(head,1);
    inserattail(head,2);
    inserattail(head,3);
    inserattail(head,4);

    //node *head= takeinput();

    //print(head);
    //cout<<size(head)<<endl;

    //printith(head,i);

    insertathead(head,6);
    insertathead(head,7);
    print(head);
    deletion(head,3);
    print(head);
    //deletion(head,7);


}
*/
// circular linked list
#include<bits/stdc++.h>
using namespace std;
class node
{

public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;

    }

};
void insertathead(node* &head, int val)
{

    node *n= new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node *temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void insertatail(node* &head, int val)
{


    if(head==NULL)
    {
        insertathead(head,val);
        return;
    }
    node *n=new node(val);
    node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void deletehead(node* &head)
{

    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node *todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;

}
void deleteion(node* &head, int pos)
{
    if(pos==1)
    {
        deletehead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void print(node *head)
{

    node*temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);

    cout<<endl;

}
int main()
{

    node *head=NULL;

    insertatail(head,1);
    insertatail(head,2);
    insertatail(head,3);
    print(head);
    insertathead(head,5);
    print(head);
    deleteion(head,1);

    print(head);
}
