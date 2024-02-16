#pragma once
#include <iostream>
using namespace std;


class Book {
private:
	string title;
	string author;
	int pages;


public:
	Book(){} // default constructor
	Book(string title, string author, int pages);
	void display();





};