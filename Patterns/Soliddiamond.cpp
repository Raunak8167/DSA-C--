#include<iostream>
using namespace std;
int main (){
    int x;
    cout << "Enter the number of rows: ";
    cin >> x;
    for (int i=1; i<=x; i++){
        for (int j=0; j<x-i; j++){
            cout << " ";
        }
        for (int j=0; j<(2*i-1); j++){
            cout << "*";
        }

        cout << endl;
    }
       for (int i=x-1; i>=1; i--){
        for (int j=0; j<x-i; j++){
            cout << " ";
        }
        for (int j=0; j<(2*i-1); j++){
            cout << "*";
        }
        cout << endl;
       }
    return 0;
}