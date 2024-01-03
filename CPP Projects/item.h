#ifndef ITEM_H
#define ITEM_H

#include<string>
#include<vector>
using namespace std;

class item
{
	public:
		void additems(string item);
		void printfrequency() const;
    private:
    	vector<string> items;
    	vector<int> freq;
    	int indexofitems(string item) const;
	
};

#endif