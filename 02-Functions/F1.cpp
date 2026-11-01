// Write a function `int cube(int n)` that returns the cube of a number.
#include <iostream>
using namespace std;
int cube(int n)
{
    return n * n * n;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "The cube of the number is : " << cube(n);
    return 0;
}