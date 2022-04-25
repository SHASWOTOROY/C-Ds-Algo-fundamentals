
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getc(stdin);
    while(t--)
    {
        stack<char>st;
        char s[160];
        gets(s);
        int len=strlen(s);
        for(int i=0; i<len; i++)
        {
            if(s[i]=='('||s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(st.empty()||st.top()!='(')
                {
                    st.push('a');
                    break;
                }
                st.pop();
            }
            else if(s[i]==']')
            {
                if(st.empty()||st.top()!='[')
                {
                    st.push('a');
                    break;
                }
                st.pop();
            }

        }
        if(st.empty())

            cout<<"Yes"<<endl;

        else

            cout<<"No"<<endl;

    }
}

