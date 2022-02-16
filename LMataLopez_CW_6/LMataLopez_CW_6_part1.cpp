/*******************************************************************************
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<6> part 1
 * Description: Simple app to add or subtract
 * Due Date: 11/5/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luiz Mata Lopez
-------------------------------------------------------------------------------
Pseudocode:
Begin
	1. The computer will ask the user to enter their choice of either the adder or subtracter
	2. if you enter a number other than 1 or 2 then the computer will ask you to try again
	3. If you press 1 or 2, the computer will ask you to enter 2 numbers
	4. Based on the tool you selected, the computer will either add the two values or subtract them
	5. The computer will return the value to the user
END
*******************************************************************************
#include <iostream>
using namespace std;

int adder(int num1, int num2) {
	int sum;
	sum = num1 + num2;
	return sum;
}
int subracter(int num1, int num2) {
	int diff;
	diff = num1 - num2;
	return diff;
}

int main() {

	int tChoice;
	int num1a, num2a, num1s, num2s;
	cout << "Enter you tool of choice(1 for addition or 2 for subtraction): ";
	cin >> tChoice;
	if (tChoice == 1) {
		cout << "Enter your first number: ";
		cin >> num1a;
		cout << "\n";
		cout << "Enter your second number: ";
		cin >> num2a;
		cout << "\n";
		int result = adder(num1a, num2a);
		cout << "The result of the operation is: " << result;
	}

	else if (tChoice == 2) {
		cout << "Enter your first number: ";
		cin >> num1s;
		cout << "\n";
		cout << "Enter your second number: ";
		cin >> num2s;
		cout << "\n";
		int result = subracter(num1s, num2s);
		cout << "The result of the operation is: " << result;
	}
	else {
		cout << "please enter a valid number (1 or 2)!" << endl;
	}





	return 0;
}
*/