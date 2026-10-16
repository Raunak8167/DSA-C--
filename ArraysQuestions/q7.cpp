// Search for a given element and print its index by arrays and tell the position of the element in the array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int arr[n] = {0};
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element;
    cout << "Enter the element to be searched : ";
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {

            cout << "The index of the element is : " << i << endl;
            cout << "The position of the element is : " << i + 1;
            return 0;
        }
    }
    cout << "Element not found in the array." << endl;
    return 0;
}