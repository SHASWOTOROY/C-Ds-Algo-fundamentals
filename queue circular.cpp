#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int back;
    int front;
    int count=0;
    int n;
public:
    queue()
    {
        cout<<"enter the size of the queue"<<endl;
        cin>>n;
        arr=new int[n];
        back=-1;
        front=-1;
        for(int i=0; i<n; i++)
        {
            arr[i]=0;
        }

    }
    bool empty()
    {

        if(front==-1&& back==-1)
        {

            return true;
        }
        return false;
    }
   void push(int x)
    {
        if((back+1)%n==front)
        {
            cout<<"overflow"<<endl;
            return;
        }
        else if(empty())
        {
            back=0;
            front=0;
            arr[back]=x;

        }
        else
        {
            back=(back+1)%n;
            arr[back]=x;

        }
        count++;
    }
    int pop()
    {
        int x=0;
        if(empty())
        {
            cout<<"empty"<<endl;
            return x;
        }
        else if(back==front)
        {
            x=arr[back];
            front=-1;
            back=-1;
            count--;
            return x;

        }
        else
        {

            x=arr[front];
            arr[front]=0;
            front=(front+1)%n;
            count--;
            return x;
        }
    }
    int peek()
    {

        if(front==-1||front>back)
        {
            cout<<"no elemnt to peek"<<endl;
            return-1;
        }
        return arr[front];
    }
    int count1()
    {
        return (count);
    }
    void display()
    {

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

};
int main()
{

    queue q;
    int op,val;


    do
    {

        cout<<"0 to exit"<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. peek()"<<endl;

        cout<<"3. pop()"<<endl;
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
            q.push(val);
            break;
        case 2:
            cout<<q.peek()<<endl;
            break;
        case 3:
            q.pop();
            break;
        case 4:
            cout<<q.empty()<<endl;
            break;
        case 5:
           cout<<q.count1()<<endl;
            break;
        case 6:
            q.display();
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
