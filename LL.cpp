#include <bits/stdc++.h>
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
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
int main()
{

    node n1(1);
    node n2(2);
    node *head= &n1;
//cout<<head->data<<endl;
    node n3(4);
    node n4(5);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    /*node *n5= new node (5);
    node *n6= new node (8);*/

    //n5->next=n6;
    print(head);
}
//taking user input;
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node (int val)
    {

        data=val;
        next=NULL;
    }
};
void print(node *head)
{

    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}
node *takeinput()
{

    int data;
    cin>>data;
    node *head=NULL;
    node *tail= NULL;

    while(data!=-1)
    {
        node *n= new node(data);

        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;

}
int main()
{

     //node n1(1);
     //node n2(2);
     //n1.next=&n2;
     //node *head= &n1;
     //print(head);
    node *head= takeinput();
    print (head);

}
// reverse a link list
// count size
#include <bits/stdc++.h>
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
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}
node *takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1)
    {
        node *n= new node(data);
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            n->next=head;
            head=n;
        }
        cin>>data;
    }

    return head;
}

int size(node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }

    return count;
}
int main()
{
    node *head= takeinput();
    print(head);
    cout<<size(head)<<endl;

}*/
/// print ith node

#include <bits/stdc++.h>
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
void print(node *head)
{

    node *temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
node *takeinput()
{

    int data;
    cin>>data;
    node *head= NULL;
    node *tail= NULL;
    while(data!= -1)
    {

        node *n= new node(data);
        if(head==NULL)
        {
            head=n;
            tail=n;

        }
        else
        {
            tail->next=n;
            tail=n;
        }
        cin>>data;

    }
    return head;
}
int size(node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;

    }
    return count;
}
void printith(node *head, int i)
{

    if(i<0)
    {
        cout<<"-1"<<endl;
        return;
    }
    int count=1;
    while(count<=i&& head!=NULL)
    {
        head=head->next;
        count++;
    }
    if(head!=NULL)
    {
        cout<<head->data<<endl;

    }
    else
    {
        cout<<"-1"<<endl;
    }

}
int main()
{
    node *head= takeinput();
    print(head);
    cout<<size(head)<<endl;
    int i;
    cin>>i;
    printith(head,i);
}
// inserting at ith point

#include <bits/stdc++.h>
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
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node *takeinput()
{

    int data;
    cin>>data;
    node *head= NULL;
    node *tail= NULL;
    while(data!=-1)
    {
        node *n= new node(data);
        if(head==NULL)
        {
            head=n;
            tail=n;

        }
        else
        {
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
int size(node *head)
{

    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;

    }
    return count;
}
void printith(node *head, int i)
{

    if(i<0)
    {
        cout<<"-1"<<endl;
        return;
    }
    int count=1;

    while(head!=NULL&&count<=i)
    {
        head=head->next;
        count++;
    }
    if(head!=NULL)
    {
        cout<<head->data<<endl;

    }
    else
    {
        cout<<"-1"<<endl;
    }
}
node *insernode(node *head, int i, int data)
{
    if(i<0)
    {
        return head;
    }
    if(i==0)
    {
        node *n= new node(data);
        n->next=head;
        head=n;
        return head;
    }
    int count=1;
    while(count<=i-1&&head!=NULL)
    {
        head=head->next;
        count++;
    }
    if(head!=NULL)
    {
        node *n= new node(data);
        n->next=head->next;
        head->next=n;
        return head;
    }
    return head;
}
int main()
{

    node *head= takeinput();
    //print(head);
    //cout<<size(head)<<endl;
    int i;
    cin>>i;
    int data;
    cin>>data;
    //printith(head,i);
    insernode(head,i,data);
    print(head);

}*/
// delete i6h node
#include <bits/stdc++.h>
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
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node *takeinput()
{

    int data;
    cin>>data;
    node *head= NULL;
    node *tail= NULL;
    while(data!=-1)
    {
        node *n= new node(data);
        if(head==NULL)
        {
            head=n;
            tail=n;

        }
        else
        {
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
int size(node *head)
{

    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;

    }
    return count;
}
void printith(node *head, int i)
{

    if(i<0)
    {
        cout<<"-1"<<endl;
        return;
    }
    int count=1;

    while(head!=NULL&&count<=i)
    {
        head=head->next;
        count++;
    }
    if(head!=NULL)
    {
        cout<<head->data<<endl;

    }
    else
    {
        cout<<"-1"<<endl;
    }
}
node *insernode(node *head, int i, int data)
{
    if(i<0)
    {
        return head;
    }
    if(i==0)
    {
        node *n= new node(data);
        n->next=head;
        head=n;
        return head;
    }
    int count=1;
    while(count<=i-1&&head!=NULL)
    {
        head=head->next;
        count++;
    }
    if(head!=NULL)
    {
        node *n= new node(data);
        n->next=head->next;
        head->next=n;
        return head;
    }
    return head;
}

node *deletenode( node*head, int i)
{

    if(i<0)
    {
        return head;
    }
    if(head!=NULL&&i==0)
    {
        return head->next;
    }
    node *current=head;;
    int count=1;
    while(count<=i-1&&current!=NULL)
    {
        current=current->next;
        count++;
    }
    if(current!=NULL&&current->next)
    {
        current->next=current->next->next;
        return head;
    }
    return head;
}
int main()
{

    node *head= takeinput();
    //print(head);
    //cout<<size(head)<<endl;
    //int i;
    //cin>>i;
    //int data;
   // cin>>data;
    //printith(head,i);
    //insernode(head,i,data);
    //print(head);
    int i;
    cin>>i;
    deletenode(head,i);
    print(head);

}
