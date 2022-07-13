//
// Created by chris on 13.07.2022.
//


#include "Card.h"



Card::Card(value v, suit s, bool isFaceUp)
{
    mValue = v;
    mSuit = s;
    mIsFaceUp = isFaceUp;
};

int Card:: GetValue() const
{
    int value = 0;
    if (mIsFaceUp)
    {
        value = mValue;

        if (value > 10)
        {
            value = 10;
        }
    }
    return value;
}

void Card:: Flip()
{
    mIsFaceUp = !mIsFaceUp;
}

