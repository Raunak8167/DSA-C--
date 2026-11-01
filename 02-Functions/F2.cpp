// swapping two numbers by function
#include <iostream>
using namespace std;
void swapnumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swapnumbers(a, b);
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}