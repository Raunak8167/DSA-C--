#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr1[n];
    int arr2[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    cout << "Copied array: ";
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}