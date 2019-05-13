#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int v1 = 0, v2 = 1, a = 1, n, f;

	cout << "FIBONACCI NUMBERS: \n" << endl;

	for (a = 1; a <= 22; ++a)
	{
		cout << v1 << ", ";
		f = v1 + v2;
		v1 = v2;
		v2 = f;
	}

	_getch();
	return 0;
}