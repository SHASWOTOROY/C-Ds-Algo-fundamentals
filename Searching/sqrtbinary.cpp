#include <bits/stdc++.h>
using namespace std;
const double eps= 1e-9;
int main()
{

    int n;
    cin>>n;
    double l=0,r=n;
    while(abs(r-l)>eps)
    {
        double mid=(l+r)/2;
        if(mid*mid>n)
        {
            r=mid;
        }
        else if(mid*mid<n)
        {
            l=mid;
        }
        else
        {
            l=r=mid;
        }

    }
    cout<<l<<endl;
}
