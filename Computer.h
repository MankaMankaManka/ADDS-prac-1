#include <iostream>
#ifndef REFEREE_H
#define REFEREE_H
class Computer : public Player
{
	public:
	Computer();
	char makeMove();
	std::string getName();
};

#endif