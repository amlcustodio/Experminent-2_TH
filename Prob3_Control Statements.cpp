#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float z = 2.5, V;
	int x, y;

	cout << "Enter the value of x: ";
	cin >> x;
	cout << "\n";
	cout << "Enter the value of y : ";
	cin >> y;
	cout << "\n";

	switch (x)
	{
	case 1:
		if (y > 1 && y < 5)
		{
			V = x * y * z;
			break;
		}
		else if (y >= 5)
		{
			V = x + (y / z);
			break;
		}

	case 2:
		if (y <= 5)
		{
			V = abs((x - y) / z);
			break;
		}
		else
		{
			V = x - sqrt(y + z);
			break;
		}

	default:
		V = x + y + z;
		break;
	}

	cout << setw(10) << setprecision(2) << fixed << "V = " << V << "\n \n";

	system("pause");
	return 0;
}