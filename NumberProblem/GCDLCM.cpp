#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    long long g = gcd(a, b);
    long long l = lcm(a, b);
    cout << "GCD = " << g << endl;
    cout << "LCM = " << l << endl;
    return 0;
}