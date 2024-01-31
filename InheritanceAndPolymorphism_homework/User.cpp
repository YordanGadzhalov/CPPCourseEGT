#include "User.h"

User::User(string username, char sex)
{
	this->username = username;
	this->sex = sex;
}


void User::postContent()
{
	cout << "The user: " << username << endl 
		<< "Sex: " << sex << endl << "Posted content." << endl;
	cout << endl;
}

char User::getSex(){
	return this->sex;
}

string User::getUsername() {
	return this->username;
}