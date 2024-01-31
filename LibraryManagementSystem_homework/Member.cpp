#include "Member.h"

Member::Member(string name, int age, string memberID)
{
    setName(name);
    setAge(age);
    setMemberID(memberID);
}

void Member::display()
{
    cout << "Member: " << getName() << endl << "Age: " 
        << getAge() << endl << "Member ID: " << getMemberID() << endl;
}

void Member::setName(string name)
{
    this->name = name;
}

string Member::getName() const
{
    return this->name;
}

void Member::setAge(int age)
{
    this->age = age;
}

int Member::getAge() const
{
    return this->age;
}

void Member::setMemberID(string memberID)
{
    this->memberID = memberID;
}

string Member::getMemberID() const
{
    return this->memberID;
}

void Member::borrowBook(Book* book)
{
    if (!book->isBorrowed) {
        cout << "The member: " << getName() << " " << "borrowed book: " << book->getTitle() << endl
            << "with author: " << book->getAuthor() << endl << "Book's ISBN: " << book->getISBN() << endl;
        cout << endl;

        book->isBorrowed = true;
    }
    else {
        cout << "Sorry this book is already borrowed." << endl;
        cout << endl;
    }

    
}
