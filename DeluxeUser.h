#pragma once
#include <iostream>
#include "User.h"
using namespace std;

class DeluxeUser : public User {
private:
	bool m_bValidCheck;
	

public:
	DeluxeUser(string username, char sex, bool validCheck);
	virtual void postContent() override;
	bool getValidCheck();




};