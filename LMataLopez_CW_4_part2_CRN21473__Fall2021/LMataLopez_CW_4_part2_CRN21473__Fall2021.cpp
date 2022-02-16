/*******************************************************************************
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<4> part 2
 * Description: program to calculate a the total price of a sign and removal if necessary
 * Due Date: 9/25/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luiz Mata Lopez
-------------------------------------------------------------------------------
Pseudocode:
Begin
	create presets for all fees and base prices

	the application will ask you choose how many colors the sign will have
	user will enter the number of colors
		
		based on the user input the computer will set a base price

	the application will ask if you would like the sign to be lighted
	user will enter either y/n for yes or no

		based on the user input the computer will calculate and add the fee if necessary

	the application will ask if you need an old sign removal
	user will enter eiether y/n for yes or no

		based on the user input the computer will calculate and add the fee if necessary

	Finally the computer will output the final price in dollars and cents

END
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	unsigned int num_of_colors;
	double priceFinal = 0;
	double base;
	char response;
	char response2;
	const double LIGHT_FEE =0.25;
	const double REMOVAL_FEE =0.10;


	cout << "Enter how many colors will the sign have? ";
	cin >> num_of_colors;

	switch(num_of_colors) 
	{
		case 1: base = 250;
			break;
		case 2: base = 325;
			break;
		case 3: base = 450;
			break;
		case 4: base = 625;
			break;
		default: base = 850;
			break;
	
	}
	cout << endl;
	
	cout << "Do you want a lighted sign? (y/n) ";
	cin >> response;

	switch (response)
	{
		case 'y': priceFinal= base + (base*LIGHT_FEE);
			break;
		case 'n': priceFinal = base;
			break;
		case 'Y': priceFinal = base + (base * LIGHT_FEE);
			break;
		case 'N': priceFinal = base;
			break;
		default: cout<<"please restart and enter a valid response";
			break;
	}
	cout << endl;

	cout << "Do you need an old sign to be removed? (y/n) ";
	cin >> response2;

	switch (response2)
	{
		case 'y': priceFinal += (base*REMOVAL_FEE);
			break;
		case 'n': priceFinal = priceFinal;
			break;
		case 'Y': priceFinal += (base*REMOVAL_FEE);
			break;
		case 'N': priceFinal = priceFinal;
			break;
		default: cout << "please restart and enter a valid response";
			break;
	}
	cout << endl;

	cout << fixed << setprecision(2) <<"The total price is: $" << priceFinal << endl;

	return 0;
}
