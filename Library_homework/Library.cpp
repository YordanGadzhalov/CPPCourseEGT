#include "Library.h"
#include <vector>

void Library::addBook(Book b)
{
	this->books.push_back(b);  // Adds books to the vector
}

void Library::printVector()
{   // for (int i : arr) - Обхожда масив for each
	for (Book book : books) { // for each Обхожда вектора 
		book.print();
	}
}

void Library::findBook(string text) {
	for (Book book : books) {
		if (book.getBookName().find(text) != string::npos) {
			cout << "Book was found" << endl;
			book.print();
		}
	}
}