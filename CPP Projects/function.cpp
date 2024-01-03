#include<iostream>
using namespace std;

int factorial(int num);
int main()
{
    int K = factorial(7);
    cout<<K<<endl;
	return 0;
}
int factorial(int num)
{
	if(num > 1)
	{
		return num*factorial(num-1);
	
	}
	return 1;
}