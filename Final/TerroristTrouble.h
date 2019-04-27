
/*/////////////////////////////////////////////////////////////////////////////////////////
								Program start
*/////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>		//using in and out stream

using namespace std;	//using standard libary namespace

// function declarations
void hackedTransaction(int& a, int& b);	//declaring function
void normalTransaction(int a, int b);	//declaring function
void printAccounts(int you, int terrorists);	//declaring function

void gameFive()		//main function
{
	// bank account amounts
	int myAccount = 500;		// my account
	int terroristsAccount = 1000;		//terrorist account

	// print account values
	printAccounts(myAccount, terroristsAccount);		//call function
	system("pause");		//pause screen
	cout << "\n";			//spacer

	// call normal transaction
	normalTransaction(myAccount, terroristsAccount);	//call function
	system("pause");		//pause screen
	cout << "\n";		//spacer

	// print account values
	printAccounts(myAccount, terroristsAccount);	//call function
	system("pause");		//pause screen
	cout << "\n";		//spacer

	// call hacked transaction
	hackedTransaction(myAccount, terroristsAccount);	//call function
	system("pause");		//pause screen
	cout << "\n";		//spacer

	// print account values 
	printAccounts(myAccount, terroristsAccount);	//call function
	system("pause");		//pause screen
	cout << "\n";		//spacer


}

// swap using references
void hackedTransaction(int& a, int& b) {	//start helper function

	cout << "Taking terrorists money..\n";		//text output

	int Hack = a;		//declaring hack
	a = b;				//swaping
	b = Hack;			//finsish swap

	cout << "Transaction Complete.\n\n";		//text output

	return;
}

// swap using copies
void normalTransaction(int a, int b) {	//start helper function

	cout << "Starting normal transaction..\n";		//text output

	int Hack = a;	//declaring hack
	a = b;			//swaping
	b = Hack;		//finsish swap

	cout << "Transaction Complete.\n\n";		//text output

	return;		//return
}

// prints the balances of both you and the terrorists
void printAccounts(int you, int terrorists) {	//start helper function

	cout << "Current account balances:\n";		//text output
	cout << "--------------------------\n";		//text output
	cout << "You:---------$" << you << endl;	//text output and your account
	cout << "Terrorists:--$" << terrorists << endl;	//text output and terrorist account
	cout << "--------------------------\n\n";	//text output

	return;		//return 
}

/*/////////////////////////////////////////////////////////////////////////////////////////
								Program End
*/////////////////////////////////////////////////////////////////////////////////////////
