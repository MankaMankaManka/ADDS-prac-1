#include <iostream>

class Computer : public Player
{
	public:
	Computer();
	char makeMove();
	std::string getName();
};