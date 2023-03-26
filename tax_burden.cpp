// tax_burden.cpp : Defines the entry point for the application.
//

#include "tax_burden.h"

using namespace std;
#include <iostream>

int main()
{
	int income = 0;
	cout << "Enter your income for the year: \n";
	cin >> income;

	if (0 > income) {
		cout << "You did not input an acceptable income answer.\n";
	};
	if (5000 >= income > 0) {
		cout << "You have no taxes for this year!\n";
	};
	if (10000 >= income > 5000) {
		double tax = (((income - 5000) * 0.1) + (0));
		cout << "Your tax for the year is: " << tax << "\n";
	};
	if (20000 >= income > 10000) {
		double tax = (((income - 10000) * 0.15) + (500));
		cout << "Your tax for the year is: " << tax << "\n";
	};
	if (30000 >= income > 20000) {
		double tax = (((income - 20000) * 0.20) + (500 + 1500));
		cout << "Your tax for the year is: " << tax << "\n";
	}
	if (income > 30000) {
		double tax = (((income - 30000) * 0.30) + (500 + 1500 + 2000));
		cout << "Your tax for the year is: " << tax << "\n";
	};
	

	return 0;
}
