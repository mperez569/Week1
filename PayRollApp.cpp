#include <iostream>
using namespace std;

double PayRoll(int x, double y);

int main()
{
    int hours;
    double PayRate;

    cout << "Enter the number of hours worked ==> ";
    cin >> hours;

    cout << "Enter the Pay rate of the job ==> ";
    cin >> PayRate;

    cout << "The payment is ==> " << PayRoll(hours, PayRate);

}

double PayRoll(int x, double y) {
    if (x < 40)
    {
        return x * y;
    }
    else
    {
        return (40 * y) + ((x - 40) * (y * 1.5));
    }
}