#pragma once
#include <iostream>
#include <string>
#include "Authors.h"
using namespace std;


class Book {
private:
	string bookName;
	Authors author;
	string genre;
	int yearOfRelease;

public:
	Book(string bookName, Authors author, string genre, int yearOfRelease);
	void print();
	void setBookName(string bookName);
	string getBookName();
	void setGenre(string genre);
	string getGenre();
	void setYearOfRelease(int yearOfRelease);
	int getYearOfRelease();

};