#include <iostream>
class Human : public Player
{
	public:
	Human();
	Human(std::string pname);
	char makeMove();
	std::string getName();
};
