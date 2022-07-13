//
// Created by chris on 13.07.2022.
//

#ifndef TWENTYONEPOINTSGAME_CARD_H
#define TWENTYONEPOINTSGAME_CARD_H
#include <iostream>

using namespace std;
class Card
{
    friend ostream& operator<<(ostream& os, const Card& aCard);
public:
    enum value {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
    enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};//крести, бубны, черви, пики

    Card(value v = ACE, suit s = SPADES, bool isFaceUp = true);
    int GetValue() const;
    void Flip();

private:
    value mValue;
    suit mSuit;
    bool mIsFaceUp;
};

#endif //TWENTYONEPOINTSGAME_CARD_H
