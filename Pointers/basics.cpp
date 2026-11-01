#include <iostream>
using namespace std;
int main()
{
    // what is pointer?
    // pointer is a variable which stores the address of another variable.
    int a = 25;
    int *b = &a;
    int **c = &b;
    // here b is a pointer which stores the address of a.
    cout << "value of a : " << a << endl;          // this will print the value of a.
    cout << "address of a : " << &a << endl;       // this will print the address of a.(& = adress of operator)
    cout << "address stored in b : " << b << endl; // this will print the address of a.

    // Dereferencing pointer:- (value at address)
    // dereferencing pointer means accessing the value of the variable which is stored in the address of the pointer.

    cout << "value at address stored in b : " << *b << endl;  // this will print the value of a.
    cout << "address of b : " << &b << endl;                  // this will print the address of b.
    cout << "address stored in c : " << c << endl;            // this will print the address of b.
    cout << "address stored in c : " << *c << endl;           // this will print the address of a.
    cout << "value at address stored in c : " << **c << endl; // this will print the value of a.
    return 0;
}