//
// Created by chris on 13.07.2022.
//

#include "Game.h"
Game::Game(const vector<string>& names)
{
    vector<string>::const_iterator pName;
    for (pName = names.begin(); pName != names.end(); ++pName)
    {
        mHumans.push_back(Human(*pName));
    }

    srand(static_cast<unsigned int>(time(0)));
    mDeck.Create();
    mDeck.Shuffle();
}

Game::~Game()
{}

void Game::Plау()
{
    vector<Human>:: iterator pHuman;
    for (int i =0; i < 2; ++i)
    {
        for (pHuman = mHumans.begin(); pHuman != mHumans.end(); ++pHuman)
        {
            mDeck.Deal(*pHuman);
        }
        mDeck.Deal(mComputer);
    }
    mComputer.FlipFirstCard();
    for (pHuman = mHumans.begin(); pHuman != mHumans.end(); ++pHuman)
    {
        cout << *pHuman << endl;
    }
    cout << mComputer << endl;

    for (pHuman = mHumans.begin(); pHuman != mHumans.end(); ++pHuman)
    {
        mDeck.AdditionalCards(*pHuman);
    }
    mComputer.FlipFirstCard();
    cout << endl << mComputer;

    mDeck.AdditionalCards(mComputer);
    if (mComputer.IsTooMuch())
    {
        for (pHuman = mHumans.begin(); pHuman != mHumans.end(); ++pHuman)
        {
            if (!(pHuman->IsTooMuch()))
            {
                pHuman->Win();
            }
        }
    }
    else
    {
        for (pHuman = mHumans.begin(); pHuman != mHumans.end(); ++pHuman)
        {
            if ( !(pHuman->IsTooMuch()) )
            {
                if (pHuman->GetTotal() > mComputer.GetTotal())
                {
                    pHuman->Win();
                }

                else if (pHuman->GetTotal() < mComputer.GetTotal())
                {
                    pHuman->Lose();
                }
                else
                {
                    pHuman->NoOne();
                }
            }
        }
    }
    for (pHuman = mHumans.begin(); pHuman != mHumans.end(); ++pHuman)
    {
        pHuman->Clear();
    }
    mComputer.Clear();
}
