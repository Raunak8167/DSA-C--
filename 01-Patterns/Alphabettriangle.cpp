#include<iostream>
using namespace std;
int main () {
 char ch;
 cout << "Enter the charcter : ";
 cin >> ch;
 for (int i=1; i<=5; i++)
 {
    for (int j=0; j<i; j++)
    {
        cout << ch;
    }
    cout << endl; 
 }
 return 0;
}