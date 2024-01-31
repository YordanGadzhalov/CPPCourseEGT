#include "DeluxeUser.h"

DeluxeUser::DeluxeUser(string username, char sex, bool validCheck) 
	:User(username, sex) , m_bValidCheck(validCheck){}


bool DeluxeUser::getValidCheck()
{
	return this->m_bValidCheck;
};

void DeluxeUser::postContent() 
	{
		cout << "Deluxe user: " << getUsername() << endl << "Sex: "
			<< getSex() << endl << "Posted content!" << endl;
		if (m_bValidCheck == true) {
			cout << "The user has Validation Check!";
		}
		else {
			cout << "The user is not validated.";
		}
		cout << endl;
		cout << endl;
	};
