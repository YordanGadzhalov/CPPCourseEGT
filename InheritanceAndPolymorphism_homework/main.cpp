#include <iostream>
#include "User.h"
#include "DeluxeUser.h"
#include "Influencer.h"
using namespace std;


int main() {

	User* user1 = new User("Yordan", 'M');
	user1->postContent();
	//cout << user1; // Prints the address 000001F6A953A9F0D
	delete user1;

	DeluxeUser* deluxeUser1 = new DeluxeUser("Yoana", 'F', true);
	deluxeUser1->postContent();
	delete deluxeUser1;


	Influencer* influencer1 = new Influencer("Dom", 'M', 250901);
	influencer1->postContent();
	delete influencer1;
	

	



	return 0;
}