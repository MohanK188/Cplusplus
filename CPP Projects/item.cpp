#include"item.h"
#include<iostream>
#include<iomanip>
using namespace std;

void item::additems(string item)
{
	int index = indexofitems(item);
	if(index != 1)
	{
		freq[index]++;
	}
	else
	{
		items.push_back(item);
		freq.push_back(1);
	}
}
void item::printfrequency() const
{
	for(int i=0;i<items.size();i++)
	{
		cout<<items[i]<<freq[i]<<endl;
	}
}
int item::indexofitems(string item) const
{
	int resultindex = -1;
	for(int i = 0;i<items.size();i++)
	{
		if(item == items.at(1))
		{
			resultindex = i;
			break;
		}
	}
	return resultindex;
}