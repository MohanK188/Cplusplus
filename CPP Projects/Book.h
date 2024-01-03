#ifndef BOOK_H
#define BOOK_H

#include<string>
using namespace std;

class Book
{
	public:
		Book(string author,string title,string genere,int numPages);
		string getAuthor() const;
		string getTitle() const;
		string getGenere() const;
		int getnumPages() const;
		void printBookdata() const;
	private:
		string author;
		string title;
		string genere;
		int numPages;
};
#endif