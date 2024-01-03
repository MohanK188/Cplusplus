#include<iostream>
using namespace std;
void division(int m,int n,int& q,int& r);
int main()
{
	int a,b,c,d;
	cout<<"Enter two integers"<<endl;
	cin>>a>>b;
	division(a,b,c,d);
}
void division(int m,int n,int& q,int& r)
{
	q = m/n;
	
	r = m%n;
	
	cout<<"Quotient: "<<q<<endl<<"Reaminder: "<<r;
}
