#include <iostream>
#include "Card.h"
#include "Player.h"
#include "Game.h"

using namespace std;

ostream& operator<<(ostream& os, const Card& aCard);
ostream& operator<<(ostream& os, const Player& aPlayer);

int main()
{
    cout <<"\t\tWelcome to 21 points!\n\n";
    int numPlayers = 0;
    while (numPlayers < 1 || numPlayers > 7)
    {
        cout << "\nHow many players? (1 - 7): ";
        cin >> numPlayers;
    }
    vector<string> names;
    string name;
    for (int i = 0; i < numPlayers; ++i)
    {
        cout << "\nEnter player name: ";
        cin >> name;
        names.push_back(name);
    }
    cout << endl;
    Game aGame(names);
    char again = 'y';
    while (again != 'n' && again != 'N')
    {
        aGame.Plау();
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> again;
    }
    return 0;
}

ostream& operator<<(ostream& os, const Card& aCard)
{
    const string VALUE[] ={"0", "1", "2", "З", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    const string SUIТS[] ={"c", "d", "h", "s"};
    if (aCard.mIsFaceUp)
    {
        os << VALUE[aCard.mValue] << SUIТS[aCard.mSuit];
    }
    else
    {
        os << "XX";
    }
    return os;
}

ostream& operator<<(ostream& os, const Player&aPlayer)
{
os << aPlayer.mName << ":\t";
vector<Card*>::const_iterator pCard;
if ( !aPlayer.mCards.empty())
{
for (pCard = aPlayer.mCards.begin(); pCard != aPlayer.mCards.end(); ++pCard)
{
os <<*(*pCard) <<"\t";
}
if (aPlayer.GetTotal() != 0)
{
cout << " ("<< aPlayer.GetTotal() << ")";
}
}
else
{
os << "<empty>";
}

return os;
}

