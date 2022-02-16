/*******************************************************************************
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<5> part 2
 * Description: This application will ask the user for information then it will
 * save it to a file and reprint it.
 * Due Date: 10/14/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luiz Mata Lopez
-------------------------------------------------------------------------------
Pseudocode:
Begin
	1. The computer will ask the user to enter their information
	2. The computer will save the info into a text file
	3. The computer will reopen the file and extract the information
	4. The user will have their info displayed
END
*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


int main() {
	string name, phoneNumber, address, city, state, zipCode;
	string filename = "list.txt";
	ofstream outputfile;
	outputfile.open(filename);

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your phone number: ";
	getline(cin, phoneNumber);
	cout << "Enter your address: ";
	getline(cin, address);
	cout << "Enter your city: ";
	getline(cin, city);
	cout << "Enter your state: ";
	getline(cin, state);
	cout << "Enter your zip code: ";
	getline(cin, zipCode);

	outputfile << name << endl;
	outputfile << phoneNumber << endl;
	outputfile << address << endl;
	outputfile << city << endl;
	outputfile << state << endl;
	outputfile << zipCode << endl;

	outputfile.close();

	cout << "\n";
	cout << "This is your information: " << endl;
	cout << "\n";

	//I will not re declare the strings because they already exist in this file not necessary.
	//If I was importing to a seperate file I'd have to declare the strings

	ifstream inputfile;
	inputfile.open("list.txt");

	getline(inputfile, name);
	getline(inputfile, phoneNumber);
	getline(inputfile, address);
	getline(inputfile, city);
	getline(inputfile, state);
	getline(inputfile, zipCode);

	cout << "Name: " << name << endl;
	cout << "Phone number: " << phoneNumber << endl;
	cout << "Address: " << address << endl;
	cout << "         " << city << ", " << state << ", " << zipCode << endl;

	inputfile.close();

	return 0;
}
