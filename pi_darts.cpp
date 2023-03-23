// pi_darts.cpp : Defines the entry point for the application.
//This program took a 160 million for loop to get 5 significant digits for me.

#define _USE_MATH_DEFINES
#include "pi_darts.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
	int x[4] = { 10, 100, 1000, 10000};
	
	
	
	cout << "Pi_by_Darts: " << endl << "Points[i]	Hits	Ratio		Est (pi)	Error" << endl;

	for (int ArrCounter = 0; ArrCounter < 1; ArrCounter++) {
		int hit = 0;

		for (int ValCount = 1; ValCount <= x[ArrCounter]; ValCount++) {

			double XCoord = 0.0;
			double YCoord = 0.0;

			srand(rand());
			XCoord = (double)rand() / (RAND_MAX);
			YCoord = (double)rand() / (RAND_MAX);

			double r = sqrt((XCoord * XCoord) + (YCoord * YCoord));

			if (1 >= r) {
				hit++;
			}
		}
		cout << x[ArrCounter] << "		" << hit << "	" << static_cast<double>(hit) / x[ArrCounter]  << "	" << 4.0 * hit / x[ArrCounter] << "		" << abs(M_PI - (4.0 * hit / x[ArrCounter])) << endl;

	}
	return 0;
}
