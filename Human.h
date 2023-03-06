#include <iostream>
#ifndef HUMAN_H
#define HUMAN_H
class Human : public Player
{
	public:
	Human();
	Human(std::string pname);
	char makeMove();
	std::string getName();
};

#endif