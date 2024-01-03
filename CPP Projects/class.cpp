#include<iostream>
#include<string>
using namespace std;
class Student
{
	public:
		void print()
		{
			cout<<"The student name is "<<name<<" and his/her rollno is "<<rollno<<endl;
		}
		string name;
		int rollno;
};

int main()
{
	Student s;
	cout<<"Enter name"<<endl;
	cin>>s.name;
	cout<<"Enter Rollno"<<endl;
	cin>>s.rollno;
	s.print();
	return 0;
	
}