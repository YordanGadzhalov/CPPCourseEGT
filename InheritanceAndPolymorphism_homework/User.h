#pragma once
#include <iostream>
using namespace std;

class User {
private:
	string username;
	char sex;
	
public:
	User(string username, char sex);
	virtual void postContent();
	string getUsername();
	char getSex();
};