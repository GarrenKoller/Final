/*/////////////////////////////////////////////////////////////////////////////////////////
								Program start
*/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>		//in and out stream
#include <string>		//string
#include "UX.h" 
#include "TerroristTrouble.h"
#include "Jumanji.h"
#include "HideSeek.h"
#include "BankingSimulator.h"
#include "AgentTraining.h"
#include "PasswordCracker.h"

using namespace std;		//standard libary namespace 

int main() {
	char playState = 'y';  //intalizing playState = to y
	int choice;				//intalizing choice
	while (playState != 'n') {		// while loop 
		welcome();					//using function welcome from header file
		cin >> choice;				// players choice 


		if (choice == 0) {			//if choice = 0
			cout << "exit" << endl;		//display exit 
			return 0;				//end program
		}
		else if (choice == 1) {		//if choice = 1

			gameOne();				//run gameOne function from header file

		}
		else if (choice == 2) {

			gameTwo();				//run gameTwo function from header file

		}
		else if (choice == 3) {

			gameThree();			//run gameThree function from header file

		}
		else if (choice == 4) {

			gameFour();				//run gameFour function from header file

		}
		else if (choice == 5) {

			gameFive();				//run gameFive function from header file

		}
		else if (choice == 6) {
			

			Verify verifyNow;

			verifyNow.verifyUser();

			system("pause");

		}


		do {      //do this
			cout << "Change Game? y/n: ";		//display play again
			cin >> playState;					//give option
		}

		while (playState != 'y' && playState != 'n');	//while playagain does not = y and n
	}
	return 0;		// end program
}

/*/////////////////////////////////////////////////////////////////////////////////////////
								Program End
*/////////////////////////////////////////////////////////////////////////////////////////