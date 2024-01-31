#include "Influencer.h"

Influencer::Influencer(string username, char sex, int followers)
    :User(username,sex)
{
    this->followers = followers;
}

void Influencer::postContent()
{
    cout << "The influencer -> " << getUsername() << endl << "Sex: "
        << getSex() << endl << "Has -> " << getFollowers() << " " << "followers." << endl << "Posted content!";
    cout << endl;
}

int Influencer::getFollowers()
{
    return this->followers;
}
