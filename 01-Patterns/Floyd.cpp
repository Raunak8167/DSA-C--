#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number of rows: ";
    cin >> x;
    int count = 1;
    for (int i=0; i<=x; i++){
        cout << " ";
        for (int j=0; j<i+1; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}