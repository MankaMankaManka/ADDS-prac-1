#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

int main(){
 Referee a;
 Human b= Human("jeff");
 Computer c;
 Player*player1= &b;
 Player*player2=&c;
 Player*winner= a.refGame(player1,player2);
 if (winner== player1 || winner==player2){
 std::cout << winner->name <<"\n";
 } else{
	  std::cout << "It's a Tie\n";
 }
 return 0;
}