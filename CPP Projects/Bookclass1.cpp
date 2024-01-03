#include<iostream>
#include<string>
using namespace std;
class Book
{
	public:
		Book();
		~Book()
		{
			
		}
		int nob;
		static int callno;
		string bookname[100];
		int price[100];
		void getDetails();
		void print();
};
Book::Book()
{
	getDetails();
	print();
}
void Book::getDetails()
{
	cout<<"Enter no of books: ";
	cin>>nob;
        for(int i=0;i<nob;i++)
        {
                cout<<"Enter book name: ";
                cin>>bookname[i];
                cout<<"Enter Price: ";
                cin>>price[i];
                cout<<endl;
        }
	
}
void Book::print()
{
        int callno=1000;
        for(int i=0;i<nob;i++)
        {
                cout<<"Call no: "<<callno++<<endl;
                cout<<"Book name: "<<bookname[i]<<endl;
                cout<<"Book price: "<<price[i]<<endl;
        }
}
int main()
{
        Book hgt;
        return 0;
}         
