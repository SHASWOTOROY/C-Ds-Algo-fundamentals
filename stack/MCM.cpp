#include <bits/stdc++.h>
using namespace std;
 
void knapSack(int W, int n, int val[], int wt[]) {
  int i, w;
  int V[n+1][W+1]{};
 
  for(i = 1; i <= n; i++) {
    for(w = 1; w <= W; w++) {
      if(wt[i] <= w) {
        V[i][w] = max(V[i-1][w], val[i] + V[i-1][w - wt[i]]);
      } else {
        V[i][w] = V[i-1][w];
      }
    }
  }
  cout<<"Max Value: "<<V[n][W]<<endl;
}
 
int main(void) {
 
    int l;
    cin>>l;
 
    int val[l];
    cout<<"Enter values: ";
    for(int i=0;i<l;i++) {
        cin>>val[i];
    }
    int wt[l];
    cout<<"Enter weight: ";
        for(int i=0;i<l;i++) {
        cin>>wt[i];
    }
  cout<<"Enter size: ";
  int n;
  cin>>n;
 
  int W;
  cout<<"Enter knapsack size: ";
  cin>>W;
 
  knapSack(W, n, val, wt);
 
  return 0;
}

// lps exists in range [1,n];
#include<bits/stdc++.h>
using namespace std;
long long  lcscount(string s1,string s2,long long  m,long long  n)
{
    /// return if the end of the sequence reached
    if(m==0 or n==0)
    {
        return 0;
    }
    // if the last character of `X` and `Y` matches
    if(s1[m-1]==s2[n-1])
    {
        return lcscount(s1,s2,m-1,n-1)+1;
    }
    // otherwise, if the last character of `X` and `Y` don't match
    return max(lcscount(s1,s2,m,n-1),lcscount(s1,s2,m-1,n));

}
int main()
{

    string s1,s2;
    cin>>s1>>s2;
    cout<<lcscount(s1,s2,s1.length(),s2.length());
}
/*#include<bits/stdc++.h>
using namespace std;
int lcs(string &s1, string &s2,int m, int n)
{
    int l[m+1][n+1];
    int i,j;
    for( i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0 or j==0)
            {
                l[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1])
            {
                l[i][j]=l[i-1][j-1]+1;
            }
            else
            {
                l[i][j]=max(l[i-1][j],l[i][j-1]);
            }
        }
    }
    return l[m][n];

}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.size();
    int n=s2.size();
    cout<<lcs(s1,s2,n,m)<<endl;
}*/
/*#include<bits/stdc++.h>
using namespace std;
const int n=102,MOD=1e9+7;
int matrixchain(int *arr,int n)
{
    int dp[n][n];
    int i,j,k,l,m;
    for(i=1; i<n; i++)
    {
        dp[i][i]=0;
    }
    for(l=2; l<n; l++) // fill half table
    {
        for(int i=1; i<n-l+1; i++)
        {
            j=i+l-1;
            dp[i][j]=INT_MAX;
            for(k=i; k<=j-1; k++)
            {
                m=dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(m<dp[i][j])
                {
                    dp[i][j]=m;
                }

            }
        }
    }
    return dp[1][n-1];

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<matrixchain(arr,n)<<endl;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int fib(int x)
{
    if(x==1 or x==0)
    {
        return (x);
    }
    return (fib(x-1)+fib(x-2));
}
int main()
{
    int i=0;
    int n;
    cin>>n;
    while(i<n)
    {
        cout<<fib(i)<<" ";
        i++;
    }

}*/
/*#include<bits/stdc++.h>
using namespace std;
int getfibo(int n)
{
    int fib[n+2];
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<=n; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<n)
    {
        cout<<getfibo(i)<<" ";
        i++;
    }

}*/
