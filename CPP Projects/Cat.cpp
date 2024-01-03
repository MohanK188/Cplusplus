#include<iostream>
#include"Cat.h"
using namespace std;

Cat::Cat(string name,double weight) : Animal(name,weight)
{
	
}
void Cat::chaseMouse() const
{
	cout<<"I am Chasing a mouse"<<endl;
}
string Cat::eat() const
{
	return "Tasty kitty food";
}
string Cat::makeNoise() const
{
	return "Meow";
} 