#include "Player.h"



Player::Player()

{

    //ctor

}



Player::~Player()

{

    //dtor

}

void Player::setName(std::strinf n)

{

    name=n;

}

void Player::setScore(int s)

{

    score = s;

}

std::string Player::getName()

{

    return name;

}

int Player::getScore()

{

    return score;

}

