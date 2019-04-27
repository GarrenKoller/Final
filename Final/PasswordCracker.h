


/*/////////////////////////////////////////////////////////////////////////////////////////
								Program start
*/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> //in out stream 
#include <string>	//strings

using namespace std;		//using standard namespace

	class Verify {		//class called verify

	public:		//make this a public class also could be private cuz im not really tossing the information around outside of this class
		void verifyUser() {		// function inside of class
			string username = "";		//set sting username to nothing
			string password = "";		//set string password to nothing
			bool loginSuccess = false;	// bool is a true and false operator

			cout << "\tWelcome!  Please login below.\n";		//display this
			cout << "The Username is not separate 3 words and a combo of these letters rekcaHytriDouY \n";		//display this
			cout << "The Password is not separate 2 words and a combo of these letters and symbols !ESAELP!ON \n";		//display this
			do {		//do this
				cout << "Username:   ";		//displat this 
				cin >> username;		//take user input into username
				cout << "Password;   ";	//display this
				cin >> password;			//take user input in to password

				if (username == "YouDirtyHacker" && password == "NO!PLEASE!") {		//if username and password = the ones that are already in the program
					cout << "\nSuccessful Login\n\n";		//display this
					loginSuccess = true;		//set loginSuccess to true
				}
				else {		//if anything else happens
					cout << " Incorrect username password combo \n";		// display this
					cout << "Please try to login again.\n\n";					//display this
				}
			} while (!loginSuccess);			//while loop if if loginSuccess is false do the do loop again
		}


	};



	/*/////////////////////////////////////////////////////////////////////////////////////////
									Program End
	*/////////////////////////////////////////////////////////////////////////////////////////
