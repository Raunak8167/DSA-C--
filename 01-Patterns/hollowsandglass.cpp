#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    // =========================
    // UPPER HALF
    // =========================
    for (int i = 0; i < n; i++)
    {
        // Leading spaces
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }

        // Width of current row
        int width = 2 * (n - i) - 1;

        // Print the row
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1 || i == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    // =========================
    // LOWER HALF
    // =========================
    for (int i = 1; i < n; i++)
    {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // Width of current row
        int width = 2 * i + 1;

        // Print the row
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1 || i == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
/*

Leading spaces
      ↓
[ FIRST STAR | HOLLOW SPACE | SECOND STAR ]
      ↑                         ↑
    j == 0                  j == width-1

when we want to make a hollow pattern, we need to follow the following rules:
1. Horizontal component like the first line of for loop like for the top and and for the bottom.
2. Spaces of left and right of the stars.
3. First star (from the left side)
4. Spaces between the stars
5. Second star (from the right side)

    */
