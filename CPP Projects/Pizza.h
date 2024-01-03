#ifndef PIZZA_H
#define PIZZA_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Pizza
{
	public:
		Pizza(string name,int cost,string size);
		void addToppings(string topping);
		string getname() const;
		int getcost() const;
		string getsize() const;
		void printToppings() const;
	private:
		string name;
		int cost;
		string size;
		vector<string> toppings;
};
#endif