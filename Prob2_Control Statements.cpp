#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a;
	float pmonth, cost;
	const float chargea = 35, chargeb = 1.10; 
	
	cout << "THIS PROGRAM CALCULATES CUSTOMER'S WATER BILL \n" << endl;

	cout << "Please enter unpaid amount: ";	cin >> pmonth; 
	cout << "Please enter gallons consumed: ";	cin >> a;
	
	if (pmonth < 0 || a < 0) 
		cout << "Invalid!" << endl;

	else if (pmonth > 0) 
	{
		cost = chargea + (chargeb * a) + pmonth + 20;
		cout << "\n Current water bill costs: P" << cost << endl;
	}

	else
	{
		cost = chargea + (chargeb * a);
		cout << "\n Current water bill costs: P" << cost << endl;
	}

	_getch();
	return 0;
}