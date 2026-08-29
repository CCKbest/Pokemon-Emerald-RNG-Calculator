#include <cmath>
#include <iostream>


int main (){



int HP = 120;
int ATK = 74;
int DEF = 45;

int SPA = 81;
int SPD = 62;
int SPE = 65;



  int hp = ((( HP - 50 - 10 ) * 100 ) / 50 ) - 90;
  int atk = ((( ATK - 5 ) * 100 ) / 50 ) - 120;
  int def = ((( DEF - 5 ) * 100 ) / 50 ) - 80; 

  int SpA = ((( SPA - 5 ) * 100 ) / 50 ) - 140;
  int SpD = (( std::ceil ( SPD / 0.9 - 5 ) * 100 ) / 50 ) - 100;
  int Speed = (( std::ceil ( SPE / 1.1 - 5 ) * 100 ) / 50 ) - 90;

std::cout << "HP: " << hp << "\n" << "ATK: " << atk <<"\n" << "DEF: " << def << "\n" << "SPA: " << SpA << "\n" << "SPD: " << SpD << "\n" << "Speed: " << Speed << "\n";

}

// Paused at 15429
// at 15432 the A Dissapeared ( Frame  )

// ~ Moreless add 3

 