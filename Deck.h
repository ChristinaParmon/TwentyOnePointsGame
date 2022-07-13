//
// Created by chris on 13.07.2022.
//

#ifndef TWENTYONEPOINTSGAME_DECK_H
#define TWENTYONEPOINTSGAME_DECK_H


#include "Hand.h"
#include "Player.h"

class Deck : public Hand
{
public:
    Deck();
    virtual ~Deck();
    void Create();
    void Shuffle();
    void Deal (Hand& aHand);
    void AdditionalCards(Player& aPlayer);

};

#endif //TWENTYONEPOINTSGAME_DECK_H
