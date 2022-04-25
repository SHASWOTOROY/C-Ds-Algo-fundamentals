// operator operand operand
// * / 2 3
/// prefix evaluation
#include <bits/stdc++.h>
using namespace std;
int prefix(string s)
{

    stack<int>st;
    for(int i=s.length()-1; i>=0; i--)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            st.push(s[i]-'0');

        }
        else
        {
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch(s[i])
            {

            case '+':
                st.push(op1+op2);
                break;

            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;

            }
        }
    }
    return st.top();
}
int main()
{

    string s;
    getline(cin,s);
    cout<<prefix(s)<<endl;


}

// operand operand operator
// 2 3 / *
//postfix eva
#include <bits/stdc++.h>
using namespace std;
int postfix(string s)
{

    stack<int>st;
    for(int i=0; i<s.length(); i++)
    {


        if(s[i]>='0'&&s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch(s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();

}

int main()
{

    string s;
    getline(cin,s);
    cout<<postfix(s)<<endl;


}
// infix to postfix
#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='/'||c=='*')
    {
        return 2;

    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string intfixtopostfix(string s)
{

    stack<char>st;
    string res;
    for(int i=0; i<s.length(); i++)
    {

        if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z'))
        {
            res=res+s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {

            while(!st.empty()&&st.top()!='(')
            {
                res=res+st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }

        }
        else
        {
            while(!st.empty()&&prec(st.top())>prec(s[i]))
            {
                res=res+st.top();
                st.pop();
            }
            st.push(s[i]);
        }


    }
    while(!st.empty())
    {
        res=res+st.top();
        st.pop();
    }
    return res;
}

int main()
{

    string s;
    getline(cin,s);
    cout<<intfixtopostfix(s)<<endl;


}*/
// infix to prefix
#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='/'||c=='*')
    {
        return 2;

    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtoprefix(string s)
{
    reverse(s.begin(),s.end());
    stack<char>st;
    string res;
    for(int i=0; i<s.length(); i++)
    {


        if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z'))
        {
            res=res+s[i];
        }
        else if(s[i]==')')
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(!st.empty()&&st.top()!=')')
            {
                res=res+st.top();
                st.pop();

            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {

            while(!st.empty()&&prec(st.top())>=prec(s[i]))
            {
                res=res+st.top();
                st.pop();
            }
            st.push(s[i]);
        }


    }
    while(!st.empty())
    {
        res=res+st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;

}
int main()
{

    string s;
    getline(cin,s);
    cout<<infixtoprefix(s)<<endl;
}
