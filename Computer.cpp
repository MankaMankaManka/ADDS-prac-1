#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

char Computer::makeMove(){
	return move;
}

std::string Computer::getName(){
	return name;
}
Computer::Computer(){
	name="computer";
	move = 'R';
}