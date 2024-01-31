#include "Book.h"
#include <vector>

Book::Book(string bookName, Authors author, string genre, int yearOfRelease) :author(author)
{
	setBookName(bookName);
	setGenre(genre);
	setYearOfRelease(yearOfRelease);
}

void Book::print()
{
	cout << "Book name is :" << bookName << endl << "Genre of the book: " << genre << endl
		<< "Year of release: " << yearOfRelease << endl << "Author of the book: ";
	cout << endl;
	this->author.printAuthor();
}



void Book::setBookName(string bookName)
{
	this->bookName = bookName;
}

string Book::getBookName()
{
	return this->bookName;
}

void Book::setGenre(string genre)
{
	this->genre = genre;
}

string Book::getGenre()
{
	return this->genre;
}

void Book::setYearOfRelease(int yearOfRelease)
{
	this->yearOfRelease = yearOfRelease;
}

int Book::getYearOfRelease()
{
	return this->yearOfRelease;
}
