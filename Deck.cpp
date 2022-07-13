//
// Created by chris on 13.07.2022.
//

#include "Deck.h"
Deck::Deck()
{
    mCards.reserve(52);
    Create();
}

Deck::~Deck()
{}

void Deck::Create()
{
    Clear();
    for (int s = Card::CLUBS; s <= Card::SPADES; ++s)
    {
        for (int r = Card::ACE; r <= Card::KING; ++r)
        {
            Add(new Card(static_cast<Card::value>(r), static_cast<Card::suit>(s)));
        }
    }
}

void Deck::Shuffle()
{
    random_shuffle(mCards.begin(), mCards.end());
}

void Deck::Deal(Hand& aHand)
{
    if (!mCards.empty())
    {
        aHand.Add(mCards.back());
        mCards.pop_back();
    }
    else
    {
        cout << "\nOut of cards.\n";
    }
}

void Deck::AdditionalCards(Player& aPlayer)
{
    cout << endl;
    while (!(aPlayer.IsTooMuch()) && aPlayer.IsAdding())
    {
        Deal(aPlayer);
        cout << aPlayer << endl;
        if (aPlayer.IsTooMuch())
        {
            aPlayer.TooMuch();
        }
    }
}
