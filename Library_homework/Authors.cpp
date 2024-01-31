#include "Authors.h"

Authors::Authors(string authorsName, string authorsLastName, string authorsNationality)
{
	setAuthorsName(authorsName);
	setAuthorsLastName(authorsLastName);
	setAuthorsNationality(authorsNationality);
}

void Authors::setAuthorsName(string authorsName)
{
	this->authorsName = authorsName;
}

string Authors::getAuthorsName()
{
	return this->authorsName;
}

void Authors::setAuthorsLastName(string authorsLastName)
{
	this->authorsLastName = authorsLastName;
}

string Authors::getAuthorsLastName()
{
	return this->authorsLastName;
}

void Authors::setAuthorsNationality(string authorsNationality)
{
	this->authorsNationality = authorsNationality;
}

string Authors::getAuthorsNationality()
{
	return this->authorsNationality;
}

void Authors::printAuthor()
{
	cout << "Author's name is: " << getAuthorsName() << " " << getAuthorsLastName() << endl
		<< "Author's nationality: " << getAuthorsNationality() << endl;
}
