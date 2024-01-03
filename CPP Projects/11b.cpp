#include<iostream>
#include<cmath>
using namespace std;
int main()
{
        int arr[20];
        int limit,key,i,j,temp,first,last,mid;
        cout<<"Enter no of elements: ";
        cin>>limit;
        cout<<"Enter the elements:"<<endl;
        for(i=0;i<limit;i++)
                cin>>arr[i];
        for(i=0;i<limit-1;i++)
        {
                for(j=0;j<limit-i-1;j++)
                {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                }
        }
        cout<<"Enter Element to be searched: ";
        cin>>key;
        first=0;
        last=limit-1;
        while(first<=last)
        {
                mid=(first+last)/2;
                if(arr[mid]==key){
                        cout<<"element found at position: "<<abs(mid-limit)<<endl;
                        break;
                }
                else if(key>arr[mid])
                        first=mid+1;
                else
                        last=mid-1;
        }
        if(first>last)
                cout<<"Element not found"<<endl;
        return 0;
}