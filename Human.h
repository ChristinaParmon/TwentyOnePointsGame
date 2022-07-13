//
// Created by chris on 13.07.2022.
//

#ifndef TWENTYONEPOINTSGAME_HUMAN_H
#define TWENTYONEPOINTSGAME_HUMAN_H


#include "Player.h"

class Human : public Player
{
public:
    Human(const string& name = "");
    virtual ~Human();
    virtual bool IsAdding() const;
    void Win()const;
    void Lose()const;
    void NoOne()const;
};


#endif //TWENTYONEPOINTSGAME_HUMAN_H
