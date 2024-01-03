#include<iostream>
using namespace std;
class Student
{
	int rollno;
	char att;
	public:
		Student(int,char);
		Student(Student &t)
		{
			rollno = t.rollno;
			att = t.att;
		}
		void display();	
};
Student::Student(int n,char s)
{
	rollno = n;
	att = s;
}
void Student::display()
{
	cout<<"Roll Number: "<<rollno;
	cout<<endl;
	cout<<"Attdendence: "<<att;
}
int main()
{
	Student k(100,'A');
	k.display();
	Student f(k);
	f.display();
}