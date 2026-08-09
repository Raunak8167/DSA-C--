#include <iostream>
using namespace std;
int main()
{
    long long n;
    cout << "Enter the number of rows : ";
    cin >> n;
    long long arr[n] = {0};
    cout << "Enter the elements of the array : ";
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long product = 1;
    for (long long i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    cout << "Product of array elements: " << product << endl;
    return 0;
}