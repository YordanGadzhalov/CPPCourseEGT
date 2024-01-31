#pragma once
#include <iostream>
using namespace std;

class Authors {
private:
	string authorsName;
	string authorsLastName;
	string authorsNationality;

public:
	Authors(string authorsName, string authorsLastName, string authorsNationality);
	void setAuthorsName(string authorsName);
	string getAuthorsName();
	void setAuthorsLastName(string authorsLastName);
	string getAuthorsLastName();
	void setAuthorsNationality(string authorsNationality);
	string getAuthorsNationality();
	void printAuthor();


};