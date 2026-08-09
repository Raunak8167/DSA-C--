#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number of rows for half the sandglass: ";
    cin >> n;
    
    // UPPER HALF (Inverted Pyramid)
    for (int i = 1; i <= n; i++) {
        // 1. Print leading spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        // 2. Print stars
        for (int k = 1; k <= (2 * (n - i) + 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // LOWER HALF (Regular Pyramid)
    // We start at i = 2 so we don't duplicate the single middle star
    for (int i = 2; i <= n; i++) {
        // 1. Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // 2. Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}