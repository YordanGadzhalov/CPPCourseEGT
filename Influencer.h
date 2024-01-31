#pragma once
#include <iostream>
#include "User.h"
using namespace std;

class Influencer : public User{
private:
	int followers;

public:
	Influencer(string username, char sex, int followers);
	virtual void postContent() override;
	int getFollowers();

};