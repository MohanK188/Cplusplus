#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
        int limit;
        int sum = 0;
        cout<<"Enter array Size: ";
        cin>>limit;
        int* ptr= new int[limit];
        cout<<"Enter array elements:"<<endl;
        for(int i=0;i<limit;i++)
        {
                cin>>*(ptr+i);
        }
        for(int i=0;i<limit;i++)
        {
                sum += *(ptr+i);
        }
        cout<<"Sum of elements: "<<sum<<endl;
        delete ptr;
        return 0;
}
