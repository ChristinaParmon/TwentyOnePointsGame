//
// Created by chris on 13.07.2022.
//

#include "Player.h"
Player::Player(const string& name)
{
    mName = name;
}

Player::~Player()
{}

bool Player:: IsTooMuch()
{
    return (GetTotal()>21);
}

void Player:: TooMuch() const
{
    cout << mName << " has too much.\n";
}
