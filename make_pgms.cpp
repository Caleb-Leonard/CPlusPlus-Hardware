// make_pgms.cpp : Defines the entry point for the application.
//Author: Caleb Leonard


#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	ofstream my_ofs;
	my_ofs.open("made.pgm");

	int ncols1 = 30;
	int nrows1 = 20;
	int maxval1 = 255;
	int dark = 50;
	int light = 100;
	// output the image header info 
	my_ofs << "P2" << endl;
	my_ofs << ncols1 << " " << nrows1 << endl;
	my_ofs << maxval1 << endl;
	// output the pixel values 
	for (int r = 0; r < nrows1; r++)	{
		for (int c = 0; c < ncols1; c++) // for each column
		{
			// calculate and output a pixel…
			if (((c >= 1) && (19 > r >= 1)) && ((r) >= (c))) {
				my_ofs << (light + (2 * r) - c) << " ";

			} else {
				my_ofs << (dark) << " ";
			}
		 
		}
		cout << endl;
	}

	my_ofs.close();

	return 0;

	
}
