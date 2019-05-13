#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
		char a; 
		float hours, cost; 
		bool pay = false;

		cout << "THIS PROGRAM CALCULATES CUSTOMER'S MONTHLY INTERNET BILL \n" << endl;
		cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << endl;
		cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr." << endl;
		cout << "Package C: For P1995/mo of unlimited access is provided.\n" << endl;

		cout << "What kind of package did you purchased? ";	cin >> a;
		cout << endl;
		cout << "How many hours have been used? ";	cin >> hours;

	do
	{
		if ((a != 'A' && a != 'a' && a != 'B' && a != 'b' && a != 'C' && a != 'c') || hours < 0) 
		{
		cout << "Invalid! \n"; 
		break; 
		}

		else

		{
			switch (a)
			{

			case 'A':
			case 'a':

				if (hours < 10) 
					cost = 995;
				else
					cost = 995 + (hours - 10) * 20; 
				break;

			case 'B':
			case 'b':

				if (hours < 20) 
					cost = 1495;
				else
					cost = 1495 + (hours - 20) * 10; 
				break;

			case 'C':
			case 'c':

				cost = 1995; 
				break;
			}

			cout << "\n Your total amount due is: P" << cost << "\n" << endl;
		}

	_getch();
	return 0;
	} while (!pay);

	
}