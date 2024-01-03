#include<iostream>
#include"Pizza.h"

using namespace std;

Pizza::Pizza(string name,int cost,string size)
{
	this->name = name;
	this->cost = cost;
	this->size = size;
	toppings.push_back("cheese");
}
void Pizza::addToppings(string topping)
{
	toppings.push_back(topping);
}
string Pizza::getname() const
{
	return name;
}
int Pizza::getcost() const
{
		return cost;	
}
string Pizza::getsize() const
{
	return size;
}
void Pizza::printToppings() const
{
	for(string topping : toppings)
	{
		cout<<"\t"<<topping<<endl;
	}
}