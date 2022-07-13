//
// Created by chris on 13.07.2022.
//

#ifndef TWENTYONEPOINTSGAME_COMPUTER_H
#define TWENTYONEPOINTSGAME_COMPUTER_H


#include "Player.h"

class Computer : public Player
{
public:
    Computer(const string&name = "Dealer");
    virtual ~Computer();
    virtual bool IsAdding() const;
    void FlipFirstCard();
};

#endif //TWENTYONEPOINTSGAME_COMPUTER_H
