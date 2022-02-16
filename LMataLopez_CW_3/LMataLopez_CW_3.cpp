#include <iostream>
#include <string>
using namespace std;

int main() {
	int syllabus_quiz, ch1_quiz, ch2_quiz, classwork1, classwork2, total_score;
	double avg_score;
	string name;

	cout << "This will calculate your average score and total score" << endl; //Lines 10-23 just take in the students grade information by using cin
	cout << "please enter your name" << endl;
	getline(cin, name);
	//cin >> name;
	cout << "please enter your Syllabus Quiz score (number 0-100): " << endl;
	cin >> syllabus_quiz;
	cout << "please enter your Chapter 1 Quiz score (number 0-100): " << endl;
	cin >> ch1_quiz;
	cout << "please enter your Chapter 2 Quiz score (number 0-100): " << endl;
	cin >> ch2_quiz;
	cout << "please enter your Classwork 1 score (number 0-100): " << endl;
	cin >> classwork1;
	cout << "please enter your Classwork 2 score (number 0-100): " << endl;
	cin >> classwork2;
		
	total_score = syllabus_quiz + ch1_quiz + ch2_quiz + classwork1 + classwork2;	// Sums all of the scores for the final score
	avg_score = (syllabus_quiz + ch1_quiz + ch2_quiz + classwork1 + classwork2)/5; // calulates the average score

	cout << name << ": " << " Final Score: " << total_score << "     Average Score: " << avg_score << endl;
	return 0;
}