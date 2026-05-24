/*
 * consoleApp.cpp
 *
 *  Created on: May 23, 2026
 *      Author: Aishah
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//main program
int main() {

	//Declare string variables
	string firstString;
	string secondString;
	string combinedStrings;
	string input;
	bool validInput;

	int counter;

	//begin for loop to take two strings from user and concatenate them
	for (counter = 1; counter <= 3; counter++) {
		//validating input
		validInput = false;

		//if invalid input is entered, reprompt the user
		while (!validInput) {
			validInput = true;

			//prompt user for input on first string
			cout << "Enter first word or phrase: ";
			getline(cin, input); //getline() allows for multi-space words to be accepted

			//validate input for character data
			for (char letter : input) {
				if (!isalpha(letter) && letter != ' ') {
					validInput = false;
				}
			}

			//store valid input into firstString
			if (validInput) {
				firstString = input;
			}
			else {
				cout << "Invalid input! Please enter characters only." << endl;
			}
		}
		validInput = false; // reset validation flag for next user input

		//if invalid input is entered, reprompt the user
		while (!validInput) {
			validInput = true;

			//prompt user for input on second string
			cout << "Enter second word or phrase: ";
			getline(cin, input); //getline() allows for multi-space words to be accepted

			//validate input for character data
			for (char letter : input) {
				if (!isalpha(letter) && letter != ' ') {
					validInput = false;
				}
			}

			//store valid input into secondString
			if (validInput) {
				secondString = input;
			}
			else {
				cout << "Invalid input! Please enter characters only." << endl;
			}
		}

		//concatenate both strings
		combinedStrings = firstString + " " + secondString;
		cout << "Combined words: " << combinedStrings << endl;
	}
	return 0;

}


