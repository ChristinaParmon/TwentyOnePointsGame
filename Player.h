//
// Created by chris on 13.07.2022.
//

#ifndef TWENTYONEPOINTSGAME_PLAYER_H
#define TWENTYONEPOINTSGAME_PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Hand.h"

using namespace std;

class Player : public Hand
{
    friend ostream& operator << (ostream& os, const Player& aPlayer);
public:
    Player(const string& name = "");
    virtual ~Player();
    virtual bool IsAdding() const = 0;
    bool IsTooMuch();
    void TooMuch() const;
protected:
    string mName;
};



#endif //TWENTYONEPOINTSGAME_PLAYER_H
