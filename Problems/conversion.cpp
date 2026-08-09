#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the binary number: ";
    cin >> n;
    int temp = n;
    int decimal = 0, base = 1;
    while (temp > 0) {
        int last_digit = temp % 10;
        temp /= 10;
        decimal +=last_digit * base;
        base *= 2;
    }
    cout << "The decimal equivalent is: " << decimal << endl;
    int x;
    cout << "Enter the octal number: ";
    cin >> x;
    int temp1 = x;
    int decimal1 = 0, base1 = 1;
    while (temp1 > 0) {
        int last_digit1 = temp1 % 10;
        temp1 /= 10;
        decimal1 += last_digit1 * base1;
        base1 *= 8;
    }
    cout << "The decimal equivalent is: " << decimal1 << endl;
    int y;
    cout << "Enter the hexadecimal number: ";
    cin >> y;
    int temp2 = y;
    int decimal2 = 0, base2 = 1;
    while (temp2 > 0) {
        int last_digit2 = temp2 % 10;
        temp2 /= 10;
        decimal2 += last_digit2 * base2;
        base2 *= 16;
    }
    cout << "The decimal equivalent is: " << decimal2 << endl;
    return 0;
}