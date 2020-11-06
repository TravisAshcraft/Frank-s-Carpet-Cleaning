// Frank's Carpet Cleaning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Rooms;
int Yes = 1;
int PricePerRoom = 30;
double Tax;

void Intro() {
	cout << "Hello, and welcom to Frank's Carpet Cleaning Service please feel free to ask any questions you may have" << endl;
	cout << "\nHow many rooms would you like us to clean?" << endl;

	cin >> Rooms;

	cout << "You entered " << Rooms << " is this correct?" << endl;
	cout << "Press 1 = yes, 2 = no, 3 = exit" << endl;
	cin >> Yes;

	return;
}

int main()
{
	Intro();

	if (Yes == 1) {
		int Cost = Rooms * PricePerRoom;
		cout << "Cost: $" << Cost << endl;
		cout << "Price per room: $" << PricePerRoom << endl;
		Tax = Cost *.06;
		cout << "Tax: $" << Tax << endl;
		double TotalCost = Cost + Tax;
		cout << "Total cost: $" << TotalCost << endl;
		cout << "==================================";
		cout << "\nThis price is good for 30 days.";

	}
	else if (Yes == 2) {
		Intro();
	}
	else if (Yes != 1 && Yes != 2) {
		//quit application
		quick_exit;
	}
}





/*Frank's Carpet Cleaning Service
Charges $30 per room
Sales tax rate is 6%
Estimates are good for 30 days

Prompt the user for the number of rooms they would like cleaned
and provide an estimate such as:

Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: %3.60
============================================
Total estimate: $63.60
This estimate is valid for 30 days




PsuedoCode:
	Prompt user for number of rooms
	Display the number of rooms
	Display price per room
	
	Display cost: (number of rooms * price per room)
	Display tax: (number of rooms * price per room * tax rate)
	Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
	Display estimate expiration time*/
