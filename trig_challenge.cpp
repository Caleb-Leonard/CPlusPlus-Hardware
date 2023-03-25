// trig_challenge.cpp : Defines the entry point for the application.
//

#include "trig_challenge.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double VecX1 = 0;
	double VecY1 = 0; 
	double VecZ1 = 0;
	double VecX2 = 0;
	double VecY2 = 0;
	double VecZ2 = 0;

	cout << "Enter an X Y Z for vector 1: ";
	cin >> VecX1 >> VecY1 >> VecZ1; 
	cout << "Enter an X Y Z for vector 2: ";
	cin >> VecX2 >> VecY2 >> VecZ2;

	cout << "\nYour Dot Product is: " << (VecX1 * VecX2) + (VecY1 * VecY2) + (VecZ1 * VecZ2) << "\n";
	cout << "Your Cos is: " << (double((VecX1 * VecX2) + (VecY1 * VecY2) + (VecZ1 * VecZ2)) / (double(sqrt((VecX1 * VecX1) + (VecY1 * VecY1) + (VecZ1 * VecZ1)) * (sqrt((VecX2 * VecX2) + (VecY2 * VecY2) + (VecZ2 * VecZ2)))))) << "\n";
	cout << "Your Cross Product is: " << (VecY1 * VecZ2) - (VecZ1 * VecY2) << " , " << -1 * ((VecX1 * VecZ2) - (VecX2 * VecZ1)) << " , " << (VecX1 * VecY2) - (VecY1 * VecX2) << "\n";

	return 0;
}
