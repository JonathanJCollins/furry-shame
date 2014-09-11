
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const float cost = 3.50;
	float change = 0.0;
	float dollar = 1.0;
	float quarter = 0.25;
	float dime = 0.10;
	float nickle = 0.05;
	float currentPaid = 0.0;
	int choice;
	cout << "Insert money to recieve twinkie." << endl;
	do {
		cout << fixed << setprecision(2) << "$" << currentPaid << " inserted, please insert more. \n0 for Dollar. \n1 for Quarter. \n2 for Dime. \n3 for Nickle." << endl;
		cin >> choice;
		switch (choice) {
		case 0:
			currentPaid = currentPaid + dollar;
			break;

		case 1:
			currentPaid = currentPaid + quarter;
			break;

		case 2:
			currentPaid = currentPaid + dime;
			break;

		case 3:
			currentPaid = currentPaid + nickle;
			break;

		default:
			cout << "Unknown coin." << endl;
			break;
		}

	} while (currentPaid < 3.50);
	change = currentPaid - 3.50;
	cout << fixed << setprecision(2) << "Enjoy your twinkie, your change is: " << change << endl;
}