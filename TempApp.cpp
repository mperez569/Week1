#include <iostream>
using namespace std;

void temperature(double x);

int main()
{
	double temp;
	cout << "Enter a temperature in Fahrenheit ==> ";
	cin >> temp;

	temperature(temp); //passing by value

}

void temperature(double x)
{
	if (x >= 90) {
		cout << "It is super HOT!!!" << endl;
	}
	else if (x >= 75)
	{
		cout << "It is HOT!!!" << endl;
	}
	else if (x >= 50 )
	{
		cout << "It is cool!!!" << endl;
	}
	else if (x >= 30)
	{
		cout << "It is cold!!!" << endl;
	}
	else
	{
		cout << "It is freezing!!!" << endl;
	}
}