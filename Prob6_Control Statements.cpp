#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, z;
	cout << "THIS PROGRAM GENERATES THE SUM OF WHOLE NUMBERS FROM 1 TO GIVEN NUMBER. \n" << endl;
	cout << "Enter any number: "; cin >> x;

	do
	{
		z = 0;
		for (y = 1; y <= x; y++)
		{
			z += y;
		}
		cout << "The sum of whole numbers from 1 to " << x << " is: " << z << "\n" << endl;
		cout << "Enter any number: "; cin >> x;

	} while (x > 0);

	cout << "Thank you!" << endl;

	_getch();
	return 0;
}