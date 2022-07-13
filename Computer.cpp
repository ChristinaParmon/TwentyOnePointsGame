//
// Created by chris on 13.07.2022.
//

#include "Computer.h"

Computer::Computer(const string&name):
        Player(name)
{}

Computer::~Computer()
{}

bool Computer:: IsAdding() const
{
    return (GetTotal() <= 16);
}

void Computer::FlipFirstCard()
{
    if (!(mCards.empty()))
    {
        mCards[0]->Flip();
    }
    else
    {
        cout << "\nNo cards to flip.\n";
    }
}
