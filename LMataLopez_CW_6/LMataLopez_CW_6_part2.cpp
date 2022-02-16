/*******************************************************************************
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<6> part 2
 * Description: Simple app to calculate the price of drinks
 * Due Date: 11/5/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luiz Mata Lopez
-------------------------------------------------------------------------------
Pseudocode:
Begin
	1. First the computer will ask the user to select a drink from the menu
	2. Then the computer will ask the user how many of that drink they want
	3. The computer will then ask what the payment amount is
	4. The computer will then calculate the price of all the drinks and display it to the user
END
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

const double cokePrice = 1.25;
const double pepPrice = 1.00;
const double waterPrice = 2.00;
const double coffeePrice = 1.50;
int choice;
double quantity;


void showMenu() {
	cout << "=====Drink Menu=====" << endl;
	cout << "1. Coke: " << setw(4) << "$" << cokePrice << endl;
	cout << "2. Pepsi: " << setw(3) << "$" << fixed << setprecision(2) << pepPrice << endl;
	cout << "3. Water: " << setw(3) << "$" << fixed << setprecision(2) << waterPrice << endl;
	cout << "4. Coffee: " << setw(2) << "$" << coffeePrice << endl;
	cout << "5. Exit" << endl;
	cout << "\n";
}
double takePurchase() {
	static double purchase;
	cout << "Please make a drink selection: ";
	cin >> choice;
	if (choice == 5) {
		cout << "you have selected exit." << endl;
		exit(EXIT_SUCCESS);
	}
	if (choice > 5) {
		cout << "Invalid selection please try again next time" << endl;
		exit(EXIT_FAILURE);
	}
	cout << "How many of those would you like: ";
	cin >> quantity;
	
	switch (choice) {
	case 1: purchase = quantity * cokePrice;
		break;
	case 2: purchase = quantity * pepPrice;
		break;
	case 3: purchase = quantity * waterPrice;
		break;
	case 4: purchase = quantity * coffeePrice;
		break;
	}
	
	return purchase;
}
double takePayment() {
	double paymentAmount;
	cout << "Enter your payment amount: ";
	cin >> paymentAmount;
	cout << "\n";
	return paymentAmount;
}

void displayInfo(double purchase, double payment) {
	double tax = purchase * 0.06;
	double total = purchase + tax;
	double change = payment - total;

	if (total > payment) {
		cout << "You don't have enough money" << endl;

		exit(EXIT_FAILURE);
	}
	cout << "Tax Amount: " << tax << endl;
	cout << "\n";
	cout << "Total purchase: " << total << endl;
	cout << "\n";
	cout << "Change: " << change << endl;
	cout << "\n";
}
int main() {
	double payment;
	int purchase;
	showMenu();
	purchase = takePurchase();
	payment = takePayment();

	displayInfo(purchase, payment);

	cout << "Thank you, have a nice day!" << endl;

	return 0;
}
