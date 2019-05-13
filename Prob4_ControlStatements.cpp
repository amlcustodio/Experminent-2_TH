#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

#include <iostream>
using namespace std;

int main()
{
	cout << "COUNTING....\n " << endl;

	for (int i = 1; i <= 30; ++i)
	{
		if (i == 11 || i == 13 || i == 15 || i == 17 || i == 19 || i == 21 || i == 23 || i == 25 || i == 27 || i == 29)
		{
			continue;
		}
		cout << i << ",";
	}
	_getch();
	return 0;
}