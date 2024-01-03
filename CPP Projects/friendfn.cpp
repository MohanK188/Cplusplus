#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		string name;
		int rollno;
		int marks[5];
		int total;
		int avg;
	friend void getDetails(Student& a);	
		
};
void getDetails(Student& a)
{
	a.total = 0;
	a.avg = 0;
	cout<<"Enetr name: ";
	cin>>a.name;
	cout<<"Enter roll no: ";
	cin>>a.rollno;
	for(int i=0;i<5;i++)
	{
		cin>>a.marks[i];
	}
	for(int i=0;i<5;i++)
	{
		a.total=a.total+a.marks[i];
	}
	a.avg = a.total/5;
	cout<<"Average Marks= "<<a.avg<<endl;
}
int main()
{
	Student a;
	getDetails(a);
	return 0;
}