#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int l=0,r=n-1;
    int flag=0;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(key==arr[mid])
        {
            cout<<mid<<endl;
            flag++;
            break;
        }
        else if(key>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            r-mid-1;

        }
    }
    if(flag==0)
    {
        cout<<"not found"<<endl;
    }
}
// binary search stl

#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>vec;
    int n;
    cin>>n;
    vec.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    int key;
    cin>>key;
    if(binary_search(vec.begin(),vec.end(),key)==true)
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

}

