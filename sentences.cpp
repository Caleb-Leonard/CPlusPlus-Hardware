// sentences.cpp : Defines the entry point for the application.
//

#include "sentences.h"
#include <iostream>
using namespace std;

int main()
{
	string s1;
	string s2;
	string s3 = ".";
	string s4 = " ";
	while (s1 != s3) {
		cout << "Enter a word to make a sentence. Enter a . to end the sentence. ";
		cin >> s1;
		if (s1 == s3) {
			s2 = s2 + s1;
			cout << s2 << "\n";
		}
		else {
			s2 = s2 + s1 + s4;
			cout << s2 << "\n";
		}
	}
	return 0;
}
