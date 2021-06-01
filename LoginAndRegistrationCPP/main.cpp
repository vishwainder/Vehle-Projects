//The code's written for practice
//to reach a certain comfort level with flow of c++
//References- HazardEdit.. for the Idea and the basic code
//VishwaInderSingh

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//using namespace std;

//function to check the status of the user
bool isLoggedIn(){

	//string username[], passw;
	string username, password;
	//comparison strings
	string un, pw;
	
	cout << "Enter Username: ";
	cin >> username;

	cout << "Enter Pssword: ";
	cin >> password;

	ifstream readFile("data\\" + username + ".txt");
	getline(readFile, un);
	getline(readFile, pw);

	if (un == username && pw == password)
		return true;
	else 
		return false;
}

int main() {

	//Sign-up/register or Login
	int choice;

	cout << "1: Register\n2: Login\nYour choice (1 or 2): ";

	cin >> choice;

	if (choice == 1) {
		string username, password;
		cout << "Username you like: ";
		cin >> username;
		cout << "Password: ";
		cin >> password;

		ofstream file;
		file.open("data\\" + username + ".txt");

		file << username << endl << password;
		file.close();

		main();
	}

	else if (choice == 2) {
		bool status = isLoggedIn();

		if (!status) {
			cout << "Username or Password Does not Exist!!\n";
			
			//for linux
			system("pause()");
			return 0;
		}
		else {
			cout << "Successfully Logged In!!\n";
			system("pause()");
			return 1;
		}
	}
}