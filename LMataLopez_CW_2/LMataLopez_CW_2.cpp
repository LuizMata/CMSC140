/*************************************************************************
*Class: CMSC 140 CRN:21473
*Instructor: Ms.Farnaz Eivazi
*Description: Basic print program to output my name, address, number, and major
*Due: 9.10.21 @ 11:59 pm
*I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Luiz O Mata Lopez
*************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
	//outputing a message using cout only one time and using \n every time we want to start a new line
	cout << "Luiz Mata Lopez \n8625 Kelso Ter. Gaithersburg MD, 20877 \n240-380-4489 \nComputer Science" << endl;
	

	// variables
	string visitorName;   //declaration
	visitorName = "Bob";  //the visitor's name is bob

	int num;			  //declaration
	num = 50;			  //num set to 50

	cout <<"the visitor's name is " << visitorName << endl; //calling the variables
	cout << num << endl;
	
	int seconds = 31540000, human_age = 19, dog_age = 2, fish_age = 1;
	
	int minutes = seconds / 60;
	int hours = minutes / 60;
	int days = hours / 24;
	int months = days / 30;
	int years = months / 12;

	cout <<"there are " << minutes <<" minutes in a year" << endl;


		// Initializing 2 ints then converting them into doubles through typecasting
	int num1 = 2;
	int num2 = 3;
	double num1d = (double)num1;
	double num2d = (double)num2;
	cout << num1 / num2 << endl; //using int so we recieve a whole number (0)
	cout << num1d / num2d << endl; //using double so we recieve a decimal answer (0.66...)

	
	return 0;
}

