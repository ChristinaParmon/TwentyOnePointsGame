//
// Created by chris on 13.07.2022.
//

#include "Human.h"
Human::Human(const string& name):
        Player(name)
{}

Human::~Human() = default;

bool Human:: IsAdding() const
{
    cout << mName << ", do you want to get one more card?(y/n)\n";
    char response;
    cin >> response;
    return(response == 'y'|| response == 'Y');
}

void Human:: Win()const
{
    cout << mName <<" wins.\n";
}
void Human:: Lose()const
{
    cout << mName <<" loses.\n";
}
void Human:: NoOne()const
{
    cout << mName <<" pushes.\n";
}
