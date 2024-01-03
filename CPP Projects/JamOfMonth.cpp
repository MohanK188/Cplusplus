#include<iostream>
using namespace std;
int main()
{
	char package;
	int n,bill;
	cout<<"Enter your pacakge,A or B or C"<<endl;
	cin>>package;
	cout<<"Enter the no of jams you purchased"<<endl;
	cin>>n;
	
	switch(package)
	{
		case 'A':
			bill=8;
			while(n>2)
			{
				bill=bill+5;
				n--;
				
			}
			cout<<"Your bill is $"<<bill<<endl;
		break;
		case 'B':
			bill=12;
			while(n>4)
			{
				bill=bill+4;
				n--;
			}
			cout<<"Your bill is $"<<bill<<endl;
		break;
		case 'C':
		 	bill=15;
		 	while(n>6)
		 	{
		 		bill=bill+3;
		 		n--;
			}
			cout<<"Your bill is $"<<bill<<endl;
		default:
		cout<<"Please Enter a valid pacakage"<<endl;	
			 
	}
	return 0;
}