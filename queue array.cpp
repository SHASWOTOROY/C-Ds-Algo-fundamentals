#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int front;
    int back;
    int n;
public:
    queue()
    {
        cout<<"enter the size"<<endl;
        cin>>n;
        arr=new int[n];
        front=-1;
        back=-1;
        for(int i=0; i<n; i++)
        {
            arr[i]=0;
        }

    }

    void push(int x)
    {
        if(back==n-1)
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
            back++;
            arr[back]=x;



        }
       /* back++;
        arr[back]=x;
        if(front==-1)
        {
            front++;
        }*/

    }
    int pop()
    {
        int x;
        if(front==-1||front>back)
        {
            cout<<"no element to pop"<<endl;
            return x;
        }
        else if(back==front){

             x=arr[front];
             arr[front]=0;
             back=-1;
             front-1;
             return x;
         }
         else{
             x=arr[front];

             arr[front]=0;
             front++;
             return x;
         }
        /*arr[front]=0;
        front++;*/
    }
    int peek()
    {
        if(front ==-1|| front>back)
        {
            cout<<"no element to peek"<<endl;
            return-1;
        }
        return arr[front];
    }
    bool empty()
    {

        if(front ==-1|| front>back)
        {

            return true;
        }
        else
        {


            return false;
        }
    }
    void display()
    {
        if(front ==-1|| front>back)
        {
            cout<<"empty"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    int count()
    {

        return (back-front+1);
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
            cout<<q.count()<<endl;
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
