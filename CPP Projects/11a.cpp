#include<iostream>
using namespace std;
int main()
{
        int arr[20];
        int num,limit,i;
        cout<<"Enter no of elements: ";
        cin>>limit;
        for(i=0;i<limit;i++)
        {
                cin>>arr[i];
        }
        cout<<"Enter Element to be searched: ";
        cin>>num;
        for(i=0;i<limit;i++)
        {
                if(arr[i]==num)
                {
                        cout<<"Element found at position: "<<i+1<<endl;
                        break;
                }
        }
        if(i==limit)
                cout<<"Elemnt not found"<<endl;
        return 0;
}