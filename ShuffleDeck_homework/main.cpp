#include <iostream>
#include "PlayingCards.h"
#include <vector>
#include <algorithm>
using namespace std;


int main()
{

    char arrType[13] = { 'A', 'K', 'Q', 'J', 'T', '9', '8', '7', '6', '5', '4', '3', '2'};
    string arrSuit[4] = { "Spades", "Clubs", "Hearts", "Diamonds" };
    vector<PlayingCard> deck;

    char currType;
    string currSuit;
    string currCard;

    for (int i = 0; i < 13; i++) {
        currType = arrType[i];
        for (int j = 0; j < 4; j++) {
            currSuit = arrSuit[j];
            PlayingCard currCard(currType, currSuit);
            deck.push_back(currCard);
        }
    }
    random_shuffle(deck.begin(), deck.end());

     for (size_t i = 0; i < deck.size(); i++) {
        cout << deck[i].getType() << " " << deck[i].getSuit() << endl;
    }




}
