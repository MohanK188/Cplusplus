#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int* ptr = (int*) malloc(5*sizeof(int));
	cout<<"Enter Numbers"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>*(ptr+i);
	}
	cout<<"Your Numbers:"<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<*(ptr+j)<<endl;
	}
	
	return 0;
}