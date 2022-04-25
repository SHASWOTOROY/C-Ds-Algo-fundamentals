#include <bits/stdc++.h>
using namespace std;

void insertbottom(stack<int>&st,int elm)
{
    if(st.empty())
    {
        st.push(elm);
        return;

    }
    int top=st.top();
    st.pop();
    insertbottom(st,elm);
    st.push(top);

}
void reverse(stack<int>&st)
{
    if(st.empty())
    {
        return;
    }
    int elm=st.top();
    st.pop();
    reverse(st);
    insertbottom(st,elm);
}
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        st.push(i);

    }
    //st.push(1);
   // st.push(2);
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;


}


