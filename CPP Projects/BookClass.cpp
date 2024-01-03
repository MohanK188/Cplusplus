#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class Book
{
	public:
		int nob;
		static int call_no;
		string bookname;
		int price;
		void getDetails();
		void print();
};
void Book::getDetails()
{
	cout<<"Enter no of books: ";
	cin>>nob;

	for(int i=0;i<nob;i++)
	{
		cout<<"Enter Book Name: ";
		cin>>bookname;
		cout<<"Enter price: ";
		cin>>price;
	}
}
void Book::print()
{
	for(int i = 0;i<=nob;i++)
	{
		call_no = call_no+i;
		cout<<"Book Call no: "<<call_no<<endl;
		cout<<"Book name: "<<bookname<<endl;
		cout<<"Book price: "<<price<<endl;
	}
}
int main()
{
	Book a;
	a.call_no=1000;
	a.getDetails();
	a.print();
	return 0;
}
