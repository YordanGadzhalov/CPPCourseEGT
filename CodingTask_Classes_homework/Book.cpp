#include "Book.h"

Book::Book(string title, string author, int pages)
{
	this->title = title;
	this->author = author;
	this->pages = pages;
}

void Book::display()
{
	cout << "Book's title is: " << title << endl
		<< "Author: "<< author << endl
		<< "Pages: " << pages << endl;
}