#pragma once
#include <iostream>
using namespace std;

class PlayingCard {
private:
	char type; //('A', 'K', 'Q', 'J', 'T', '9', '8', '7', '6', '5', '4', '3', '2');
	string suit; //("spades", "diamonds", "hearts", "clubs");

public:
	PlayingCard(char type, string suit);
	void setType(char type);
	char getType() const;
	void setSuit(string suit);
	string getSuit() const;
	void displayCard();

};