#pragma once
#include <iostream>
using namespace std;


class Book {
private:
	string title;
	string author;
	string ISBN;
	

public:
	Book(){}
	Book(string title, string author, string ISBN);
	void display();
	void setTitle(string title);
	string getTitle() const;
	void setAuthor(string author);
	string getAuthor() const;
	void setISBN(string ISBN);
	string getISBN() const;
	bool isBorrowed = false;


};