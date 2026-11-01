/*Question: Write a C++ program that:
1. Declares int x = 10;
2. Creates a pointer int *p = &x;
3. Uses the pointer to change x to 50.
4. Prints both x and *p.*/
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p = &x;
    *p = 50;                               // changing the value of x using pointer p
    cout << "Value of x: " << x << endl;   // prints the value of x
    cout << "Value of *p: " << *p << endl; // prints the value of *p
    return 0;
}