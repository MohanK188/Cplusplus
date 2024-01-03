#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	cout<<"Enter limit: ";
	cin>>n;
	int* ptr = new int[n];
	
	for(int i = 0;i<n;i++)
	{
		cin>>*(ptr+i);
	}
	for(int i=0;i<n;i++)
	{
		sum +=*(ptr+i);
	}
	cout<<"Sum of elements: "<<sum<<endl;
	delete ptr;
	return 0;
}