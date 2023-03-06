#include <iostream>
#ifndef REFEREE_H
#define REFEREE_H
class Referee
{
	public:
	Referee();
	Player*refGame(Player*player1, Player*player2);
	char m1;
	char m2;
};

#endif