/***********************
 *  Name: Riley Conant
 *  Date/Time Completed: 8/27/2019 5:30pm
 *  Function: Take user input and have certain situations happen based on what was entered by the user.
 *  
 *  Input: First Name, Last Name, Commands "A" and "B"
 * 
 *  Output: Varies based on Command that is entered
 *  
 * ********************/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv)
{
	string fName, lName, command; 
	cout << "Enter your first name: ";
	cin >> fName;
	cout << "Enter your last name: ";
	cin >> lName;
	cout << "Enter your command: ";
	cin >> command;
	if(command == "A")
	{
			cout << "Hello, " << fName << " " << lName << "." << endl;
	}
	else if(command == "B")
	{
		for(int i =10; i> 0; i--) 
		{
			cout << i << endl;
		}
		cout << "Goodbye!" << endl;
	}
	else 
	{
		cout << "Command is invalid!" << endl;
	}
}
