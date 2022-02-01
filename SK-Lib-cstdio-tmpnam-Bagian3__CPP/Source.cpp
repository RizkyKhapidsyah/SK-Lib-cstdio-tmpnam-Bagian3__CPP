#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	char filename1[L_tmpnam], filename2[L_tmpnam];

	tmpnam(filename1);
	tmpnam(filename2);
	cout << "Temporary filenames:" << endl;
	cout << "1. " << filename1 << endl;
	cout << "2. " << filename2 << endl;

	/*	when null is passed	*/
	char* filename3 = tmpnam(NULL);
	cout << "3. " << filename3;

	_getch();
	return 0;
}