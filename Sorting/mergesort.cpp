#include <bits/stdc++.h>
using namespace std;

int arr[100000];
int temp[100000];
void print(int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

void mergesort(int l,int h)
{
    if(l==h)
        return;


    int mid=(l+h)/2;
    mergesort(l,mid);
    mergesort(mid+1,h);

    for(int i=l,j=mid+1,k=l; k<=h; k++)
    {
        if(i==mid+1)
        {
            temp[k]=arr[j++];
        }
        else if(j==h+1)
        {
            temp[k]=arr[i++];
        }
        else if(arr[i]<arr[j])
        {
            temp[k]=arr[i++];
        }
        else
        {
            temp[k]=arr[j++];
        }
    }
    for(int k=l; k<=h; k++)
    {
        arr[k]=temp[k];
    }

}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    mergesort(0,n-1);
    print(n);
}



