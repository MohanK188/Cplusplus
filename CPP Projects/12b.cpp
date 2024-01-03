#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[i+left];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[],int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int m=(left+right-1)/2;
    MergeSort(arr,left,m);
    MergeSort(arr,m+1,right);
    merge(arr,left,m,right);
}
int main()
{
    int a[]={12,3,4,26,5};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"Before Sorting: ";
    for(int i=0;i<size;i++)
    cout<<a[i]<<"\t";
    cout<<endl;
    MergeSort(a,0,size-1);
    cout<<"After Sorting: ";
    for(int i=0;i<size;i++)
    cout<<a[i]<<"\t";
    return 0;
}