#include <iostream>
#include <cmath>


int main(){

// The RAM Adress : BC 56 A3 1A

unsigned CopySeed = 0x9BB4B36B; //That is right when I press A/7
int FaraninFakeye = false; 
int Frame = 0;
unsigned treshold = 32; 


do {

unsigned seed = CopySeed;

Frame++;

   seed = seed * 0x41c64e6d + 0x6073; 
    unsigned PiDLow = seed >> 16;


    seed = seed * 0x41c64e6d + 0x6073; 
    unsigned PiDHigh = seed >> 16;
    unsigned PiD = ( PiDHigh << 16 ) | PiDLow;

         unsigned Nature = PiD % 25;


   seed = seed * 0x41c64e6d + 0x6073; 
   unsigned DaBigYahu = seed >> 16;

   seed = seed * 0x41c64e6d + 0x6073;
   unsigned DaBigKirk = seed >> 16;
   
   int hp = 0x1F & DaBigYahu;  
   int attk = 0x1F & ( DaBigYahu >> 5 );
   int def = 0x1F & ( DaBigYahu >> 10 );

   int Speed = 0x1F & DaBigKirk ;
   int SpA = 0x1F & ( DaBigKirk >> 5 );
   int SpD = 0x1F & ( DaBigKirk >> 10);

int HP = std::floor( 0.01 * ( 2 * 45 + hp ) * 15 ) + 15 + 10;
int ATK = std::floor( 0.01 * ( 2 * 60 + attk ) * 15 + 5 );
int DEF = std::floor( 0.01 * ( 2 * 40 + def ) * 15 + 5 );

int SPA = std::floor( std::floor ( 0.01 * ( 2 * 70 + SpA ) * 15 + 5 ) * 1.1 );
int SPD = std::floor( 0.01 * ( 2 * 50 + SpD ) * 15 + 5 );
int SPE = std::floor( std::floor ( 0.01 * ( 2 * 45 + Speed ) * 15 + 5 ) * 1.1 );


//if ( hp == 31 && attk == 18 && def == 1 && SpA == 12 && SpD == 14 && Speed == 31 ){

         //std::cout << "Your frame is on:" << Frame << "\n";

      //FaraninFakeye = true;

     //} 

CopySeed = CopySeed * 0x41c64e6d + 0x6073;


   if ( hp + attk + def + SpA + SpD + Speed == 150 ) {

   std::cout << "\n\n";
   std::cout << "The frame is on: " << Frame << "\n\n";

   std::cout << "Stats for level 5 Pokemon\n";
   std::cout << "-------------------------\n\n";

   std::cout << " Level Hp: " << HP << ", Level Atk: " << ATK << ", Level Def: " << DEF << "\n";
   std::cout << " Level SpA: " << SPA << ", Level SpD: " << SPD << ", Level Speed: " << SPE << "\n" << "\n";

   std::cout << "Here are the IV's" << "\n";

   std::cout << "Hp: " << hp << "\n";
   std::cout << "Atk: " << attk << "\n";
   std::cout << "Def: " << def << "\n";

   std::cout << "SpA: " << SpA << "\n";
   std::cout << "SpD: " << SpD << "\n";
   std::cout << "Speed: " << Speed << "\n" << "\n";

   std::cout << "-------------------------" << "\n";

          std::string Decreased_Values[] = {"Attack", "Defense", "Speed", "SpAtk", "SpDef"};
            std::string Increased_Values[] = {"Attack", "Defense", "Speed", "SpAtk", "SpDef"};

         int Row ( Nature / 5 ); // Increased Stats
         int Column ( Nature % 5 ); // Decreased Stats

      std::string Decreased_Nature_of_Pkmn = Decreased_Values [Column] ;         
      std::string Increased_Nature_of_Pkmn = Increased_Values [Row] ; 

      std::cout << "Your Decreased Stat is : " << Decreased_Nature_of_Pkmn << "\n";
      std::cout << "Your Increased Stat is : " << Increased_Nature_of_Pkmn << "\n";

      
         if ( Frame >= 15000 ){

            FaraninFakeye = true;
         

      }

      

      }


   }while ( FaraninFakeye != true );

}

// Workspace

// Frame counter allocation : 020249C0 ( Main RNG, Emerald US )
// PRNG State : 03005D80 ( PRNG Generation to Obtain the State )

// RESULTS

// Pressed at 16733 

// Yea, if anyone takes it's time to read this, I realized that the PRNG State when loaded a Quick State, it does not reset //

// I Spent too much time on this already //


