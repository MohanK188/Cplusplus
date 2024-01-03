#include<iostream>
#include<string>
#include<fstream>
#include"item.h"
using namespace std;
int main()
{
	item item1;
	ifstream infile;
	string temp;
	
	infile.open("list.txt");
	
	if(!infile)
	{
		cout<<"error opening file"<<endl;
		return 1;
	}
	while(!infile.eof())
	{
		infile >> temp;
		item1.additems(temp);
	}
	item1.printfrequency();
	
	infile.close();
	
	return 0;
}