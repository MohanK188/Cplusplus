#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int* ptr;
	int n,sum = 0;
	cout<<"Enter array limit: ";
	cin>>n;
	ptr = (int*) malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		cin>>*(ptr+i);
	}
	for(int i=0;i<n;i++)
	{
		sum += *(ptr+i);
	}
	cout<<"Sum of elements: "<<sum;
	free(ptr);
	return 0;
}