#include "PlayingCards.h"

PlayingCard::PlayingCard(char type, string suit)
{
    setType(type);
    setSuit(suit);
}

void PlayingCard::setType(char type)
{
    this->type = type;
}

char PlayingCard::getType() const
{
    return this->type;
}

void PlayingCard::setSuit(string suit)
{
    this->suit = suit;
}

string PlayingCard::getSuit() const
{
    return this->suit;
}

void PlayingCard::displayCard()
{
    cout << "Your card is: " << getType() << " " << " of " << getSuit() << endl;
}
