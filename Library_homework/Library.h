#pragma once
#include <iostream>
#include "Book.h"
#include <vector>
using namespace std;


class Library {
public:
	void addBook(Book); // Adds book to Books vector
	void printVector();
	void findBook(string); // Приема заглавие 

private:
	vector<Book> books;


};