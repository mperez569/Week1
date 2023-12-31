#include <iostream>
using namespace std;

//polymorphism

// int indicates that the function will return an integer
int SumNumbers(int, int); //Prototype, tells computer that the function will exist without implementation, a declaration

int SumNumbers(int x);

int main()
{
    int a; //declaration of variable a
    int b; //declaration of variable b
    cout << "Enter a value for a ==> ";
    cin >> a;

    cout << "Enter a value for b ==> ";
    cin >> b;

/*
*
* an alternate way of calling the function SumNumbers
*
   int c = SumNumbers(a, b); // we are invoking a function, SumNumbers
   cout << "The sum of a and b is ==> " << c;
*/

    cout << "The sum of a and b is ==> " << SumNumbers(a, b);

    cout << "\nThe value of a plus 10 is ==> " << SumNumbers(a);
}

//function SumNumbers takes in two paraemeters and outputs an integer value
int SumNumbers(int x, int y)
{
    return x + y;
}

int SumNumbers(int x)
{
    return x + 10;
}