// Figure out how to find if a number is power of 2 without any loop.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n > 0 && (n & (n - 1)) == 0)
        cout << "Power of 2";
    else
        cout << "Not Power of 2";

    return 0;
}
