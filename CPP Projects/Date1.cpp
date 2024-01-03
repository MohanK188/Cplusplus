#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string date;
	cout<<"Enter the date in format dd/mm/yyyy"<<endl;
	cin>>date;
	stringstream a;
	stringstream c;
	stringstream e;
	stringstream f;
	stringstream g;
	int b;
	int d;
	int y;
	int x;
	int z;
	a << date[0];
	a >> b;
	f << date[1];
	f >> x;
	c << date[3];
	c >> d;
	c << date[4];
	c >> z;
	string year = date.substr(6,4);
	e << year;
	e >> y;
	if(b >= 3 && x > 1)
	{
		cout<<"Error in date!"<<endl;
	}
	else if(d >= 1 && z > 2)
	{
		cout<<"Error in month!"<<endl;
	}
	else if(y < 1992 || y > 2023)
	{
		cout<<"Error in year!"<<endl;
	}
	return 0;

}