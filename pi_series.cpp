// pi_series.cpp : Defines the entry point for the application.
//Author: Caleb Leonard


#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


using namespace std;

int main()
{
	//using the Knopps Series equation, we get pi/4
	//int n1= 0;

	double pi1 = 0.0000000;
	double pi2 = 0.0000000;

	//cout << "How many iterations of the Knopps Series equation would you like to approximate pi?";
	//cin >> n1;

	for (int i = 1; i < 8; i++) {
		int iteration = pow(10, i);
		
		pi2 = 0;

		for (int j = 1; j < (iteration + 1); j++) {
			

			pi1 = ( (atan(1 / ((pow(j, 2)) + j + 1))));
 
			pi2 = pi1 + pi2;
		}
		cout << "Approximation of pi in " << iteration << " iterations: " << 4 * pi2 << " CMath's Pi: " << M_PI << " Difference: " << abs((4 * pi2) - (M_PI)) << endl;

	}

	//As you can see, it wold take over 10 million iterations to approximate pi to the value of a float (7 digits of acurracy)
	

	//PI = acos(-1, 0) //works to get pi by getting the radians of the point (-1, 0) on the unit circle which equals pi;

	return 0;
}
