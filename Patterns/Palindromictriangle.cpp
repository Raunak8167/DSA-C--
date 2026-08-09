#include <iostream>
using namespace std;
int main (){
    int a;
    cout << "Enter the number : ";
    cin >> a;
    for (int i=0; i<=a; i++){
        cout << " ";
        for (int j=i; j>=1; j--){
        cout << j;
        }
        for (int k=2; k<=i; k++){
            cout << k;
        }
        cout << endl;
    }
    return 0;
}