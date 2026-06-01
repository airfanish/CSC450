/*
 * pointer.cpp
 *
 *  Created on: May 31, 2026
 *      Author: Aishah
 */

#include <iostream>

using namespace std;

//main program
int main() {

	//declare integer variables

	int firstInt;
	int secondInt;
	int thirdInt;

	//Prompt user input for first variable
	cout << "Enter the first integer: ";
	cin >> firstInt;

	//Create pointer for first variable using dynamic memory
	int* firstPointer = new int;

	//Store first variable value in pointer location
	*firstPointer = firstInt;

	//Prompt user input for second variable
	cout << "Enter the second integer: ";
	cin >> secondInt;

	//Create pointer for the second variable using dynamic memory
	int* secondPointer = new int;

	//Store second variable value in pointer location
	*secondPointer = secondInt;

	//Prompt user input for third integer
	cout << "Enter the third integer: ";
	cin >> thirdInt;
	cout << "\n";

	//Create pointer for third variable using dynamic memory
	int* thirdPointer = new int;

	//Store third variable value in pointer location
	*thirdPointer = thirdInt;

	//Display variable values
	cout << "Variable Values" << endl;
	cout << "The first integer entered is " << firstInt << endl;
	cout << "The second integer entered is " << secondInt << endl;
	cout << "The third integer entered is " << thirdInt << endl;
	cout << "\n";

	//Display pointer addresses
	cout << "Pointer Addresses" << endl;
	cout << "The first pointer location is " << firstPointer << endl;
	cout << "The second pointer location is " << secondPointer << endl;
	cout << "The third pointer location is " << thirdPointer << endl;
	cout << "\n";

	//Display values stored at pointer locations
	cout << "Values Stored at Pointer Locations" << endl;
	cout << "The value stored at the firstPointer location is " << *firstPointer << endl;
	cout << "The value stored at the secondPointer location is " << *secondPointer << endl;
	cout << "The value stored at the thirdPointer location is " << *thirdPointer << endl;
	cout << "\n";

	//Delete allocated memory for all pointers
	delete firstPointer;
	delete secondPointer;
	delete thirdPointer;

	//Set pointers to nullptr
	firstPointer = nullptr;
	secondPointer = nullptr;
	thirdPointer = nullptr;

	return 0;
}


