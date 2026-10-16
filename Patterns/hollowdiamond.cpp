#include <iostream>
using namespace std;

int main()
{
    int n; // Number of rows for the upper half
    cout << "Enter number of rows : ";
    cin >> n;
    // ---------- Upper Hollow Pyramid ----------
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print hollow pyramid width
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    // ---------- Lower Inverted Hollow Pyramid ----------
    for (int i = 1; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Print inverted hollow pyramid width
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            if (j == 0 || j == 2 * (n - i) - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
