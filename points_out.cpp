// points_out.cpp : Defines the entry point for the application.
//Author: Caleb Leonard
//To be used with point_in.cpp


#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	ofstream my_ofs;
	my_ofs.open("points1.txt");
	

	float X1 = 0.0;
	float Y1 = 0.0;

	for (int i = 0; i < 5; i++) {
		cout << "Please input a 2D vector with floating points separated by a space following -> X Y ->: " << endl;
		cin >> X1 >> Y1;
		my_ofs << X1 << " " << Y1 << endl;
	}
	
	my_ofs.close();

	return 0;
}
