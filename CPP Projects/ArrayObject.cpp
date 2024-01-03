#include<iostream>
#include<array>
using namespace std;

int sumarray(array<int,10>theArray);
int main()
{
	array<int,10>primaryArray{2,3,4,5,6,7,8,9,10,1};
	int theResult = sumarray(primaryArray);
	cout<<theResult;
	return 0;
	
}
int sumarray(array<int,10>theArray)
{
	int sum = 0;
	for (int item : theArray)
	{
		sum += item;
	}
	return sum;
}