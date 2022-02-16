/*******************************************************************************
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<7> 
 * Description: app that displays numbers greater than the input
 * Due Date: 11/23/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luiz Mata Lopez
-------------------------------------------------------------------------------
Pseudocode:
Begin
	1. User is prompted to enter a number
	2. User enters a number using keyboard
	3. the computer goes through all the values and decides which ones are larger 
	   than the entered value, if it's larger it will display them to the user

END
*******************************************************************************/
#include <iostream>
using namespace std;

void largerThanN(int temp[], int size, int arg1);

int main() {
	int num;
	int nums[] = { 30,20,50,2,-1,44,3,12,90,32 };
	cout << "Please enter a number: ";
	cin >> num;
	cout << "\nThe numbers greater than " << num << " are: ";
	largerThanN(nums, 10, num);

	system("pause>0");
}

void largerThanN(int temp[], int size, int arg1) {
	for (int index = 0; index < size; index++) {
		if (temp[index] > arg1) {
			cout << temp[index] << " ";
		}
	}
}