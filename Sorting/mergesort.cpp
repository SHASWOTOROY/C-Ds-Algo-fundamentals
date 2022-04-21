#include <bits/stdc++.h>
using namespace std;

void mergesort(int *ar,int l,int h)
{
    int temp[h-l+1];
    if(l==h)
        return;


    int mid=(l+h)/2;
    mergesort(ar,l,mid);
    mergesort(ar,mid+1,h);

    for(int i=l,j=mid+1,k=l; k<=h; k++)
    {
        if(i==mid+1)
        {
            temp[k]=ar[j++];
        }
        else if(j==h+1)
        {
            temp[k]=ar[i++];
        }
        else if(ar[i]<ar[j])
        {
            temp[k]=ar[i++];
        }
        else
        {
            temp[k]=ar[j++];
        }
    }
    for(int k=l; k<=h; k++)
    {
        ar[k]=temp[k];
    }

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
    mergesort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}



