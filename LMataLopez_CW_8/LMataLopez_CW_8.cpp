/*******************************************************************************
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<8>
 * Description: 
 * Due Date: 11/30/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luiz Mata Lopez
-------------------------------------------------------------------------------
Pseudocode:
Begin
	1. User is prompted to enter how many scores they will enter in total
	2. The computer will then ask the user to enter a value for each score
	3. Then it will list all the scores in the order they were entered
	4. The computer will order the scores from highest to lowest then display them
	5. Finally aditional info (lowest score, highest score, average) will be displayed

END
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void displayArray(int array[], int size);
void selectionSort(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
double findAvg(int array[], int size);

int main() {
	int numOfScores;
	int scores[50];
	cout << "How many scores do you want to enter? ";
	cin >> numOfScores;
	
	for (int count = 0; count < numOfScores; count++) {
		cout << "Please enter score " << count + 1 << ": ";
		cin >> scores[count];
		cout << endl;
	}

	int max = findMax(scores, numOfScores);
	int min = findMin(scores, numOfScores);
	double avg = findAvg(scores, numOfScores);

	cout << "The scores in their original order are: ";
	displayArray(scores, numOfScores);
	cout << endl;
	cout << "The scores ordered from largest to smallest are: ";
	selectionSort(scores, numOfScores);
	displayArray(scores, numOfScores);
	cout << endl;

	cout << "\nThe highest score is: " << max << endl;
	cout << "The lowest score is: " << min << endl;
	cout << "The average of all the scores is: " << fixed << setprecision(1) <<  avg << endl;

	return 0;
}


//Function to display the contents of an Array given an array and its size
void displayArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}

//Swap necessary for selectionSort
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}


//Sorting algorithm of choice to sort our array of scores
void selectionSort(int array[], int size) {
	int maxIndex, maxValue;
	
	for (int start = 0; start < size - 1; start++) {
		maxIndex = start;
		maxValue = array[start];
		for (int index = start + 1; index < size; index++) {
			if (array[index] > maxValue){
				maxValue = array[index];
				maxIndex = index;

				}
		}
		swap(array[maxIndex], array[start]);
	}
}

int findMax(int array[], int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

int findMin(int array[], int size) {
	int min = 100;
	for (int i = 0; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

double findAvg(int array[], int size) {
	double avg;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += array[i];	
	}
	avg = double(sum) / double(size);
	return avg;
}



	
