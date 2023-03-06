#include <iostream>
#include "Player.h"
#ifndef REFEREE_H
#define REFEREE_H
class Computer : public Player
{
	public:
	Computer();
	char makeMove();
	std::string getName();
	char move;
	std::string name;
};

#endif