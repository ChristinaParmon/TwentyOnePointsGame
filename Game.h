//
// Created by chris on 13.07.2022.
//

#ifndef TWENTYONEPOINTSGAME_GAME_H
#define TWENTYONEPOINTSGAME_GAME_H
#include <vector>
#include <string>
#include "Deck.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

class Game
{
public:
    Game(const vector<string>& names);
    ~Game();
    void Plау();

private:
    Deck mDeck;
    Computer mComputer;
    vector<Human> mHumans;
};


#endif //TWENTYONEPOINTSGAME_GAME_H
