#include <iostream>
#include <fstream>

using namespace std;

//main program

int main() {

	//create variable to hold user input
	string userInput;

	//prompt and receive user input
	cout << "Enter input here: " << endl;
	getline(cin, userInput); //ensure entire line will be stored


	//open file in append mode
	ofstream outputFile;
	outputFile.open("CSC450_CT5_mod5.txt", ios::app);

	//write user input to the file
	outputFile << userInput << endl;

	//close file
	outputFile.close();

	//open file for reading
	ifstream inputFile;
	inputFile.open("CSC450_CT5_mod5.txt");

	//variable for reading file
	string fileContents;
	string line;
	while (getline(inputFile, line)) {
		fileContents += line;
	    fileContents += "\n";
	}

	//close file
	inputFile.close();

	//Reverse all characters in the file contents
	string reversedString; //store reversed version
	for (int i = fileContents.size() - 1; i >= 0; i--) {
		reversedString += fileContents[i];
	}

	//declare variabble for reversed string file
	ofstream reversedFile;

	//open the reversed file
	reversedFile.open("CSC450-mod5-reverse.txt");

	//send contents of reversedString into the reversedFile
	reversedFile << reversedString;


	//close the file
	reversedFile.close();

	//display updates
	cout << "\nUser entered: " << userInput << endl;
	cout << "\nOriginal file contents: " << fileContents << endl;
	cout << "\nReversed file contents: " << reversedString << endl;

	//Display confirmation message that files were updated successfully
	cout << "\nFiles have been successfully updated." << endl;

	return 0;
}
