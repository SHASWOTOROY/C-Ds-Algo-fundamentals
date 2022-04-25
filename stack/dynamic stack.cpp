
#include <iostream>
using namespace std;
class stack
{

    int *arr;
    int top;
    int n;
public:
    stack()
    {

        arr=new int[n];
        top=-1;
        for(int i=0; i<n; i++)
        {
            arr[i]=0;
        }
    }
    void push (int x)
    {
        if(top==n-1)
        {
            int *newarr= new int [2*n];
            for(int i=0; i<n; i++)
            {
                newarr[i]=arr[i];


            }
            arr=newarr;
            delete []arr;
            n=2*n;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {

        if(top==-1)
        {
            cout<<"no element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top()
    {

        if(top==-1)
        {
            cout<<"no element in stack"<<endl;
            return-1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
    int  count()
    {

        return (top+1);
    }
    void display()
    {
        if(top>=0)
        {
            for(int i=top; i>=0; i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"empty"<<endl;
        }
    }
};
int main()
{
    stack st;
    int op,val;


    do
    {
        cout<<"0 to exit"<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. pop()"<<endl;

        cout<<"3. top()"<<endl;
        cout<<"4. empty()"<<endl;
        cout<<"5. count()"<<endl;
        cout<<"6. display()"<<endl;
        cout<<"7. clear screen"<<endl;
        cin>>op;
        switch(op)
        {
        case 0:
            break;
        case 1:
            cin>>val;
            st.push(val);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            cout<<st.Top()<<endl;
            break;
        case 4:
            cout<<st.empty()<<endl;
            break;
        case 5:
            cout<<st.count()<<endl;
            break;
        case 6:
            st.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            break;
        }





    }
    while(op!=0);


}
