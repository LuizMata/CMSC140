/*******************************************************************************
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<5> part 1
 * Description: Using loops to print out triangles
 * Due Date: 10/14/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luiz Mata Lopez
-------------------------------------------------------------------------------
Pseudocode:
Begin
	the application will print various patterns 
END
*******************************************************************************/
#include<iostream>
using namespace std;

int main() {

	cout << "(i) Let's print a line" << endl;
	cout << "\n";
	//part (i)
	for (int i = 0; i < 10; i++) {
		cout << "*";
	}

	cout << "\n";
	cout << "(ii) Now let's print a longer line" << endl;
	cout << "\n";

	//part(ii)
	for (int i = 0; i < 20; i++) {
		cout << "*";
	}

	cout << "\n";
	cout << "\n";
	cout << "(iii) Now let's print a triangle" << endl;
	cout << "\n";

	//part(iii)
	for (int i = 1; i < 11; i++) {		//first loop is used to keep track of the rows
		for (int j = 0; j < i; j++) {	//second loop is used to keep track of the number of stars per row
			cout << "*";
		}
		cout << "\n";					//creates a new row
	}

	cout << "\n";
	cout << "(iv) Now here's a bigger triangle" << endl;
	cout << "\n";

	//part(iv)
	for (int i = 1; i < 21; i++) {		//first loop is used to keep track of the rows
		for (int j = 0; j < i; j++) {	//second loop is used to keep track of the number of stars per row
			cout << "*";
		}
		cout << "\n";
	}

	cout << "\n";
	cout << "(v) Let's flip the triangle upside down!" << endl;
	cout << "\n";

	//part(v)
	for (int i = 1; i < 11; i++) {		
		for (int j = 11; i < j; j--) {	//start with j = 11 then decrement so it starts at 10 stars and ends with 1
			cout << "*";
		}
		cout << "\n";					
	}

	cout << "\n";
	cout << "(vi) and for the finale" << endl;
	cout << "\n";

	//part(vi)
	for (int i = 1; i < 21; i++) {
		for (int j = 21; i < j; j--) {	//start with j = 21 then decrement so it starts at 20 stars and ends with 1
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}
