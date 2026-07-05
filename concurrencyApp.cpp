/*
 * concurrencyApp.cpp
 *
 *  Created on: Jun 28, 2026
 *      Author: aishf
 */

#include <iostream>
#include <thread>

using namespace std;

//create function countUp
void countUp() {
	//FOR counter = 0 to 20
	for (int i = 0; i <= 20; i++) {
		//Display counter
		cout << i << endl;
	}
}

//create function countUp
void countDown() {
	//FOR counter = 20 down to 0
	for (int i = 20; i >= 0; i--) {
		//Display counter
		cout << i << endl;
	}
}

int main() {
	cout << "Counting up from 0 to 20:" << endl;
	// Create first thread and run countUp
	thread firstThread(countUp);
	//Wait for first thread to finish
	firstThread.join();

	cout << "\nCounting down from 20 to 0:" << endl;
	//Create second thread and run countdown
	thread secondThread(countDown);
	//wait for second thread to finish
	secondThread.join();

	//display message the program has completed
	cout << "\nThe program has successfully completed." << endl;
}
