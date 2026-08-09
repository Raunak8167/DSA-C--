#include <iostream>
using namespace std;
int fibonacci(int n)
{
    // Fibonacci series = 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
    // sum of previous two terms
    // but starts with 0, 1 then it goes on.
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;
    cout << n << " The Fibonacci number = " << fibonacci(n) << endl;
    return 0;
}