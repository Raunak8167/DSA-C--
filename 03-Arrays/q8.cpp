//Count how many times a given element occurs by arrays.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int element;

    cout << "Enter the element to be counted: ";
    cin >> element;

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    cout << "The element occurs " << count << " times in the array." << endl;

    return 0;
}