#include<iostream>
using namespace std;

int main () {
   int n;
   cout << "Enter the number of rows: ";
   cin >> n;
   for (int i = 0; i < n; i++) {
       
    // Spaces
    for (int j = 0; j <= n - i - 1; j++) {
        cout << " ";
    }
    
    // Ascending numbers
    for (int j = 1; j <= i + 1; j++) {
        cout << "*";
    }
    
    // Descending numbers
    for (int j = i; j > 0; j--) {
        cout << "*";
    }
    
    cout << endl;
   }
   
   return 0;
}