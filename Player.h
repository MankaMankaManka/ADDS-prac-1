#include <iostream>

class Player
{
public:
virtual std::string getName()=0;
virtual char makeMove()=0;
char move;
std::string name;
};