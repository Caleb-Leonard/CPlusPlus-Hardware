// points_in.cpp : Defines the entry point for the application.
//Author: Caleb Leonard
//To be used with point_out.cpp


#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	ifstream my_ifs;
	my_ifs.open("points1.txt");

	float X1 = 0.0;
	float Y1 = 0.0;

	//Circle center input for later use
	cout << "Enter a floating point coordinate point to act as a circle's center: " << endl;
	float pointX = 0.0;
	float pointY = 0.0;
	cin >> pointX >> pointY;

	for (int i = 1; i < 6; i++) {
		//reads back vectors
		my_ifs >> X1 >> Y1;
		cout << "Your vectors are: " << X1 << " " << Y1 << endl;

		//Calculates vector squares and magnitude
		float x2 = X1 * X1;
		float y2 = Y1 * Y1;
		float magnitude = sqrt(x2 + y2); 

		//Determines if vector is within, lies on, or out of bounds of circle
		if (20 > (x2 + y2)) {
			cout << "Your vector is within a circle about the origin with a radius of 20." << endl;
		} else if (20 == (x2 + y2)) {
			cout << "Your vector lies on a circle about the origin with a radius of 20." << endl; 
		} else {
			cout << "Your vector is not within a circle about the origin with a radius of 20."<< endl; 
		}
		
		//Displays vector magnitude (length)
		cout << "Vector " << i << " magnitude from the origin is: " << magnitude << endl;

		//Determines if vector is within, lies on, or out of bounds of circle with its center on a point of your choosing
		
		if (20 > (((pointX - X1) * (pointX - X1)) + ((pointY - Y1) * (pointY - Y1)))) {
			cout << "Your vector is within a circle about your point (" << pointX << "," << pointY << ") with a radius of 20." << endl;
		}
		else if (20 == (((pointX - X1) * (pointX - X1)) + ((pointY - Y1) * (pointY - Y1)))) {
			cout << "Your vector lies on a circle about your point (" << pointX << "," << pointY << ") with a radius of 20." << endl; 
		}
		else {
			cout << "Your vector is not within a circle about your point (" << pointX << "," << pointY << ") with a radius of 20." << endl;
		}

		cout << "\n";

	}


	my_ifs.close();

	return 0;
}