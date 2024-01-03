#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string data;
	cout<<"Enter the date in format dd/mm/yyyy"<<endl;
	cin>>data;
	stringstream a;
	stringstream b;
	stringstream c;
	int d;
	int m;
	int y;
	string date = data.substr(0,2);
	a << date;
	a >> d;
	string month = data.substr(3,2);
	b << month;
	b >> m;
	string year = data.substr(6,4);
	c << year;
	c >> y;
	
	if(d > 31)
	{
		cout<<"Error in date!"<<endl;
	}
	else if(m > 12)
	{
		cout<<"Error in Month!"<<endl;
	}
	else if(y < 1992 || y > 2023)
	{
		cout<<"Error in year!"<<endl;
	}

}