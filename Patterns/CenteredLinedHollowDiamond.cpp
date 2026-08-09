#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // ---------- Upper Hollow Pyramid ----------
    for (int i = 0; i < n; i++)
    {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Pyramid width
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i || i == n - 1)
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
        // Leading spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Width decreases every row
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