#include <iostream>
using namespace std;
int main()
{



	float a, b, c;

	cout << " Enter your weight in Kg:";
	cin >>  a;
	cout << " Enter your height in Meters: ";
	cin >>  b;
	cout << '\n';
	c = a / (b * b);
	if (c < 18.5)
	{
		cout << " Underweight:";

	}
	else if (18.5 < c && c < 24.9)
	{
		cout << " Normal";

	}
	else if (25 < c && c < 29.9)
	{
		cout << " Overweight";

	}
	else if (30 < c && c < 34.9)
	{
		cout << " Obese";
	}
	else if (35 < c)
	{

		cout << " Extremly obese";
	}

	return 0;

}