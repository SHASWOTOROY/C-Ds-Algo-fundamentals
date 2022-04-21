
#include <bits/stdc++.h>
using namespace std;
void merge(int *ar, int l,int h,int mid)
{

    int i,j,k;
    i=l;
    j=mid+1;
    k=0;
    int temp[h-l+1];
    while(i<=mid&& j<=h)
    {

        if(ar[i]<ar[j])
        {
            temp[k]=ar[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=ar[j];
            k++;
            j++;
        }

    }
    while(i<=mid)
    {

        temp[k]=ar[i];
        k++;
        i++;
    }
    while(j<=h)
    {
        temp[k]=ar[j];
        k++;
        j++;
    }
    for(i=l; i<=h; i++)
    {
        ar[i]=temp[i-l];
    }
}
void MergeSort(int *ar, int l, int h)
{
    if(l<h)
    {

        int mid=(l+h)/2;
        MergeSort(ar,l,mid);
        MergeSort(ar, mid+1,h);
        merge(ar,l,h,mid);
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
    MergeSort(arr, 0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
