#include <iostream>
#include "Drinks.h"
#include "NonAlchoholic.h"
#include "Alchoholic.h"
#include "Orders.h"
#include "User.h"
#include <vector>
using namespace std;

int main()
{
	Drinks *ptr = new Alchoholic(150, 0.5, "Whiskey", "Jack Daniels", 35.99, 20);
	Drinks *ptr1 = new Alchoholic(100, 0.5, "Vodka", "Beluga", 56.00, 40);
	Drinks *ptr2 = new NonAlchoholic("Hell Energy", "Energy Drink", 1.25, 4000, 0.250, 0.30);


	Orders order("22.01.2024" , "NO:22045");
	order.addDrink(ptr);
	order.addDrink(ptr1);
	order.addDrink(ptr2);

	User user1("Yordan");
	user1.addPurchase(order);
	for (Orders o : user1.getPurchase()){
		cout << "Purchased: " << o.getDate() << endl << "Purchase number: " << o.getPurchaseNum() << endl;
		order.printVectorOrders();
	}
	
	

	


	
}
