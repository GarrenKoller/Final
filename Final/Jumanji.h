

/*/////////////////////////////////////////////////////////////////////////////////////////
								Program start
*/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
///////////////////
using std::cout;
using std::cin;
using std::endl;
using std::string;
//////////////////
void gameFour() {


	string  You;
	//////////////////
		//get the information
	cout << "Welcome to Jumanji! \n\n";		//display title

	cout << "|You Selection|\n";			//display options

	cout << "Enter the name of the character you would like: \n";		//description
	cout << "1: Dr.SMOLDER BRAVESTONE -ARCHEOLOGIST-INTERNATIONAL EXPLORER \n";		//display options
	cout << "2: FRANKLIN 'MOOSE' FINBAR -EXPER IN WEAPONS AND ZOOLOGY \n";
	cout << "3: PROFESSOR SHELLY OBERON -CARTOGRAPHER-CODE BREAKER-CURVY GENIUS \n";		//display options
	cout << "4: RUBY ROUNDHOUSE -FIGHTER-KILLER OF MEN \n";		//display options
	cout << "5: ALEX VREEKE -PILOT \n";		//display options
	cin >> You;		//take in user input



	//tell story 
	cout << "\nYou have selected " << You << ".\n\n Now you have been sucked in to the world of Jumanji! \n";
	cout << You << ", I am writing to you regarding the desperate situation in Jumanji.\n";
	cout << "We need your help at once!\n";
	cout << "\n My name is Nigel Billinsly Jumanji field guide. ";
	cout << "I was hired by Dr.Smolder Bravestone's\n former partner now nemesis Professor Rustle Vamplet to lead a fateful expedition";
	cout << "\n You see Professor Vamplet had come in search of the fabled jaguar shrine resting place\n of the secrete jewel of Jumanji. ";
	cout << You << ", The jewel was his greatest obsession and after\n years of research he had believed he has discovered its ware bouts.";
	cout << "Vamplet told me he\n wanted to find the jewel in order to document it in his writings.";
	cout << "What I did not know\n was he intended to take the jewel for himself.";
	cout << "Ledged tells any who dares to blind the\n jaguar will be consumed by a dark power.";
	cout << "Vamplet assumed dominion over all of Jumanji's\n creatures possessing them controling them and a terrible curse befell this once placid\n land. ";
	cout << "I begged him to put it back, but once he had it in his grasp, he could never let\n it go.";
	cout << "So, I waited tell they slept that night and I made my move. ";
	cout << "I stole the jewel and\n ran. ";
	cout << You << " You must return the jewel of Jumanji to the jaguar’s eye to lift the curse.";
	cout << "Good luck!\n The fate of Jumanji is in your hands.";

	system("pause");		//pause system 
}


/*/////////////////////////////////////////////////////////////////////////////////////////
								Program End
*/////////////////////////////////////////////////////////////////////////////////////////
