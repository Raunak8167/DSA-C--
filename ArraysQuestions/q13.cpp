// Linear Search in C++ using Arrays
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {24, 90, 132, 34342, 4, 5, 1, 19, 21, 28, 86};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter the number to be searched : ";
    cin >> x;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "Number found in the array." << endl;
    }
    else
    {
        cout << "Number not found in the array." << endl;
    }
    return 0;
}