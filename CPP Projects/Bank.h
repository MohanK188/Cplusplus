#ifndef BANK_H
#define BANK_H

#include<string>
using namespace std;

class Bank
{
	public:
		Bank(string Owner);
		Bank(string Owner,int Balance);
		void deposit(int amount);
		void withdraw(int amount);
		string getOwner() const;
		int getBalance() const;
		
		
	private:
		string Owner;
		int Balance;
};
#endif