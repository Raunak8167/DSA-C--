/*Two numbers are entered through the keyboard.
Write a program to find the value of one
number raised to the power of another using recursive function.
(For example,  and  are input variables
and output is ).*/
#include <iostream>
using namespace std;
double power(double x, double y)
{
    if (y == 0)
    {
        return 1;
    }
    if (y > 0)
    {
        return x * power(x, y - 1);
    }
    return 1.0 / power(x, -y);
}
int main()
{
    int x, y;
    cout << "Enter two numbers : ";
    cin >> x >> y;
    double result = power(x, y);
    cout << x << " raised to the power of " << y << " is:  " << result << endl;
    return 0;
}