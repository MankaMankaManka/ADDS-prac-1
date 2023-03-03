#include <iostream>
#include <Human.h>
#include <Computer.h>
#include <Referee.h>
#include <Player.h>
char Human::makeMove(){
	std::cout << "Enter move: \n";
	std::cin >> move;
	return move;
}

std::string Human::getName(){
	return name;
}

Human::Human(){
	name="Human";
}

Human::Human(std::string pname){
	name= pname;
}