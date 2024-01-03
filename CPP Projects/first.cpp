#include<iostream>
#include"Bank.h"

using namespace std;

int main()
{
	Bank myAccount("Mohan",1000);
	Bank yourAccount("Thams");
	
	yourAccount.deposit(5000);
	myAccount.withdraw(200);
	myAccount.deposit(3000);
	
	cout<<"Your Account is still "<<yourAccount.getBalance()<<endl;
	cout<<"My Account has "<<myAccount.getBalance()<<endl;
	return 0;
}