#include<iostream>
#include"Bank.h"

using namespace std;

Bank::Bank(string Owner)
{
	this->Owner = Owner;
	this->Balance = 0;
}
Bank::Bank(string Owner,int Balance)
{
	this->Owner = Owner;
	if(Balance <= 0)
	{
		cout<<"Enter An valid balance";
	}
	else
	{
		this->Balance = Balance;
	}
}
void Bank::deposit(int amount)
{
	if(amount >= 0)
	{
		Balance += amount;
	}
	else
	{
		cout<<"Enter amount Greater Than Zero"<<endl;
	}
}
void Bank::withdraw(int amount)
{
	if(amount > Balance)
	{
		cout<<"Invalid Transaction";
	}
	else
	{
		Balance -= amount;
	}
}
string Bank::getOwner() const
{
	return Owner;
}
int Bank::getBalance() const
{
	return Balance;
}