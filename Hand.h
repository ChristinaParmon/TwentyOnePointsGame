//
// Created by chris on 13.07.2022.
//

#ifndef TWENTYONEPOINTSGAME_HAND_H
#define TWENTYONEPOINTSGAME_HAND_H

#include <vector>
#include "Card.h"

using namespace std;

class Hand
{
public:
    Hand();
    virtual ~Hand();
    void Add(Card* pCard);
    void Clear();
    int GetTotal() const;
protected:
    vector<Card*> mCards;
};


#endif //TWENTYONEPOINTSGAME_HAND_H
