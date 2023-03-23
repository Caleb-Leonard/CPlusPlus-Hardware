// cosine_integration.cpp : Defines the entry point for the application.
//
#define _USE_MATH_DEFINES
#include "cosine_integration.h"
#include <cmath>

using namespace std;

int main()
{
	
	int x[4] = { 10, 20, 100, 1000};
	
		for (int ArrayVal = 0; ArrayVal < 4; ArrayVal++) {
			
			double sum = 0;
			double SumError = 0;
			double MaxError = 0;
		

			cout << "For npts = " << x[ArrayVal] << " (steps of (1/" << (x[ArrayVal] / 2) << ") PI):" << endl;
			cout << "i		" << "x[i]			" << "sin(x)			" << "est (sin(x))			" << "error			" << endl;

			for (int ValCount = 1; ValCount <= x[ArrayVal]; ValCount++) {

				double CurrentStep = ((2 * M_PI * static_cast<double>(ValCount)) / x[ArrayVal]);
				cout << ValCount << "|		" << double(CurrentStep) << "|		" << sin(CurrentStep) << "|		";


				double integral = (double(cos(CurrentStep))) * ((2 * M_PI) / x[ArrayVal]);

				sum = sum + integral;
				double error = abs(sin(CurrentStep)) - abs(sum);

				cout << sum << "|	" << error << endl; 

				SumError = abs(error) + SumError;


				if (abs(error) > MaxError) {
					MaxError = abs(error);
				}
				
			}
			cout << "npts	mean error	max error	" << endl ;
			cout << x[ArrayVal] << "	" << (SumError / x[ArrayVal]) << "	" << MaxError << endl << endl;


		};

	return 0;
}
