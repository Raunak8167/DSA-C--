#include<iostream>
#include<algorithm>
using namespace std;
int main () {
    int a , b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    int original_a = a, original_b = b; // Store original values for output
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "The GCD of " << original_a << " and " << original_b << " is : " << a << endl;
    return 0;
}