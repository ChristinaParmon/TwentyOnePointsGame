//
// Created by chris on 13.07.2022.
//

#include "Hand.h"
Hand::Hand()
{
    mCards.reserve(7);
}

Hand::~Hand()
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    mCards.push_back(pCard);
}

void Hand::Clear()
{
    vector <Card*>:: iterator iter = mCards.begin();

    for (iter = mCards.begin(); iter != mCards.end(); ++iter)
    {
        delete *iter;
        *iter = 0;
    }
    mCards.clear();
}

int Hand::GetTotal() const
{
    if (mCards.empty())
    {
        return 0;
    }

    if (mCards[0] -> GetValue()==0)
    {
        return 0;
    }
    int total = 0;
    vector <Card*>:: const_iterator iter;
    for (iter = mCards.begin(); iter != mCards.end(); ++iter)
    {
        total += (*iter) -> GetValue();
    }

    bool hasAce = false;
    for (iter = mCards.begin(); iter != mCards.end(); ++iter)
    {
        if ((*iter)->GetValue() == Card::ACE)
        {
            hasAce = true;
        }
    }

    if (hasAce && total <= 11)
    {
        total += 10;
    }

    return total;
}
