#include<iostream>
#include<cmath>
using namespace std;
int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, n%10);
        temp /= 10;
    }
    if (sum == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}