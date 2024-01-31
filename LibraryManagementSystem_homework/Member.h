#pragma once
#include <iostream>
#include "Book.h"
using namespace std;


class Member : public Book {
private:
	string name;
	int age;
	string memberID;
	

public:
	Member(string name, int age, string memberID);
	void display();
	void setName(string name);
	string getName() const;
	void setAge(int age);
	int getAge() const;
	void setMemberID(string memberID);
	string getMemberID() const;
	void borrowBook(Book* book);
};
