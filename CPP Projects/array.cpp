#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> myInt;
	int input;
	
	cout<<"Enter a positive integer to contuniue"<<endl;
	cin>>input;
	
	while(input>=0)
	{
		myInt.push_back(input);
		cout<<"Enter a positive integer to contuniue"<<endl;
		cin>>input;
	} 
	for(int num : myInt)
	{
		cout<<num*2<<endl;
	}
	
	
}