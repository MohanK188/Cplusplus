#include<iostream>
#include"Dictionary.h"
using namespace std;

void Dictionary::addDefinition(string word,string definition)
{
	auto it = dictionary.find(word);
	
	if(it != dictionary.end())
	{
		it->second = definition;
	}
	else
	{
		dictionary[word] = definition;
	}
}
string Dictionary::getDefinition(string word) const
{
	auto it = dictionary.find(word);
	string result = "";
	
	if(it != dictionary.end())
	{
		result = it->second;
	}
	else
	{
		result = "NOT FOUND";
	}
}
void Dictionary::printall() const
{
	for(auto pair : dictionary)
	{
		cout<<pair.first<<":\t"<<pair.second<<endl;
	}
}