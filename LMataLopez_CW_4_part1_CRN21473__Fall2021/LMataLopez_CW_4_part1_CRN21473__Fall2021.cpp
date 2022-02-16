/*******************************************************************************
Header to include in source code:
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<4> part 1
 * Description: program to calculate a discount on amusement park ticekts
 * Due Date: 9/21/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luiz Mata Lopez
-------------------------------------------------------------------------------
Pseudocode:
Begin
	create preset values for base discounts and price

	ask the user how many tickets were sold to a customer
	take the user's response
	calculate the price before the discount

	if the number of tickets sold is 0
		tell the user that tickets sold can't be 0

	if the number of tickets sold is between 3 and 4
		apply a 10% discount to the price and display the final price

	if the number of tickets sold is between 5 and 6
		apply a 25% discount and display the final price

	if the number of tickets sold is between 7 and 9
		apply a 33% discount and display the final price

	if the number of tickets sold is 10 or more
		apply a 42% discount and display the final price
END
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
	const int TICKET_PRICE = 109;
	const double discount10 = .10;
	const double discount25 = .25;
	const double discount33 = .33;
	const double discount42 = .42;
	int ticketsSold;
	double discountPrice;

	cout << "How many days of tickets were sold? ";
	cin >> ticketsSold;
	int total = ticketsSold * TICKET_PRICE;

	if (ticketsSold == 0)
		cout << "Tickets sold can't be zero";
	else if (ticketsSold >= 3 && ticketsSold <= 4)
		cout << "The total cost of the purchase is $" << (total) - (discount10* ticketsSold * TICKET_PRICE);
	else if(ticketsSold >= 5 && ticketsSold <= 6)
		cout << "The total cost of the purchase is $" << (total) - (discount25 * ticketsSold * TICKET_PRICE);
	else if(ticketsSold >= 7 && ticketsSold <= 9)
		cout << "The total cost of the purchase is $" << (total) - (discount33 * ticketsSold * TICKET_PRICE);
	else if(ticketsSold >= 10)
		cout << "The total cost of the purchase is $" << (total) - (discount42 * ticketsSold * TICKET_PRICE);
	return 0;
}

