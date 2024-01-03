#include<iostream>
#include<string>
using namespace std;
class Bank
{
    public:
        Bank();
        Bank(string owner,string bankName,string branch,int accNum);
        
        void deposit();
        void withdraw();
        void getDetails();
        void printDetails();
    private:
        string owner;
        string bankName;
        string branch;
        int accNum;
        int balance;
		int amount;    

};
Bank::Bank()
{
	getDetails();
    deposit();
    withdraw();
    printDetails();
}
Bank::Bank(string owner,string bankName,string branch,int accNum)
{
	this->owner = owner;
	this->bankName = bankName;
	this->branch = branch;
	this->accNum = accNum;
	deposit();
    withdraw();
    printDetails();
}
void Bank::deposit()
{
	cout<<"Enter amount to be deposited"<<endl;
	cin>>amount;
	if(amount >= 0)
	{
		balance += amount;
	}
	else
	{
		cout<<"Enter amount Greater Than Zero"<<endl;
	}
}
void Bank::withdraw()
{
	cout<<"Enter amount to be withdrawn"<<endl;
	cin>>amount;
	if(amount > balance)
	{
		cout<<"Invalid Transaction";
	}
	else
	{
		balance -= amount;
	}
}
void Bank::getDetails()
{
    cout<<"Enter Your bank name: ";
    cin>>bankName;
    cout<<"Enter your Branch: ";
    cin>>branch;
    cout<<"Enter your Name: ";
    cin>>owner;
    cout<<"Enetr your Account Number: ";
    cin>>accNum;
}

void Bank::printDetails()
{
	cout<<"***********ACCOUNT STATEMENT**********"<<endl;
	cout<<"Bank Name: "<<bankName<<"\t\t"<<"Branch: "<<branch<<endl;
	cout<<"Account Owner Name: "<<owner<<"\t"<<"Account Number: "<<accNum<<endl;
	cout<<"Account balance: "<<balance<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
}
int main()
{
    Bank a;
    Bank b("Ram","BOI","Sriprembudur",23456789);
   
    return 0;
}