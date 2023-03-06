#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

Referee::Referee(){
	
}

Player* Referee::refGame(Player*player1, Player*player2){
	m1 = player1->makeMove();
	m2 = player2->makeMove();
	
	if (m1=='R'){
		
		if (m2=='R'){
			return nullptr;
		}else if (m2=='P'){
			return player2;
		}else if (m2=='S'){
			return player1;
		}else return nullptr;
		
	}else if (m1=='P'){
		
		if (m2=='R'){
			return player1;
		}else if (m2=='P'){
			return nullptr;
		}else if (m2=='S'){
			return player2;
		}else return nullptr;
	
	}else if (m1=='S'){
		
		if (m2=='R'){
			return player2;
		}else if (m2=='P'){
			return player1;
		}else if (m2=='S'){
			return nullptr;
		}else return nullptr;
		
	}else return nullptr;
}