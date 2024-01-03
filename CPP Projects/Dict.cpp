#include<iostream>
#include"Dictionary.h"
using namespace std;

void printMenu();
void uiAddword(Dictionary& dictionary);
void uiGetdefinition(const Dictionary& dictionary);
int main()
{
	Dictionary theDictionary;
	int userChoice;
	
	printMenu();
	cin>>userChoice;
	cin.get();
	
	while(userChoice != 0)
	{
		if(userChoice == 1)
		{
			uiAddword(theDictionary);
		}
		else if(userChoice == 2)
		{
			uiGetdefinition(theDictionary);
		}
		else if(userChoice == 3)
		{
			theDictionary.printall();
		}
		cout<<endl;
		printMenu();
		cin>>userChoice;
		cin.get();
	}
	cout<<"program done!"<<endl;
	return 0;
}
void printMenu()
{
	cout<<"Type your selection"<<endl;
	cout<<"1 - Add a new word and definition"<<endl;
	cout<<"2 - Get definition for a word"<<endl;
	cout<<"3 - Print all definitions"<<endl;
	cout<<"0 - Exit"<<endl;
}
void uiAddword(Dictionary& dictionary)
{
	string word;
	string definition;
	
	cout<<"Enter a word"<<endl;
	getline(cin,word);
	
	cout<<"Enter definition"<<endl;
	getline(cin,definition);
	
	dictionary.addDefinition(word,definition);
}
void uiGetdefinition(const Dictionary& dictionary)
{
	string theWord;
	
	cout<<"For which word you want definition"<<endl;
	getline(cin,theWord);
	
	cout<<dictionary.getDefinition(theWord)<<endl;
	cout<<endl;
}