#include<iostream>
#include"Book.h"


using namespace std;
	
	Book::Book(string author,string title,string genere,int numPages)
	{
		this->author = author;
		this->title = title;
		this->genere = genere;
		this->numPages = numPages;
		
	}
	string Book::getAuthor() const
	{
		return author;
	}
	string Book::getTitle() const
	{
		return title;
	}
	string Book::getGenere() const
	{
		return genere;
	}
	int Book::getnumPages() const
	{
		return numPages;
	}
	void Book::printBookdata() const
	{
		cout<<title<<"by "<<author<<"has "<<numPages<<"no of pages"
	    <<"and"<<genere<<"is its genere"<<endl;
	}