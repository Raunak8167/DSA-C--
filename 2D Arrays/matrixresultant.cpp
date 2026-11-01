#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r1, c1, r2, c2, i, j, k;

    cout << "Enter number of rows and columns of Matrix 1: " << endl;
    cin >> r1 >> c1;

    cout << "Enter number of rows and columns of Matrix 2: " << endl;
    cin >> r2 >> c2;

    // For multiplication, columns of M1 must equal rows of M2
    if (c1 != r2)
    {
        cout << "Multiplication is not possible: columns of Matrix 1 must equal rows of Matrix 2." << endl;
        return 0;
    }

    vector<vector<int>> M1(r1, vector<int>(c1));
    vector<vector<int>> M2(r2, vector<int>(c2));
    vector<vector<int>> product(r1, vector<int>(c2, 0));

    cout << "Enter elements of matrix 1: " << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> M1[i][j];
        }
    }

    cout << "Enter elements of matrix 2: " << endl;
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> M2[i][j];
        }
    }

    // Each cell = row i of M1 times column j of M2
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                product[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    cout << "Product of the two matrices:" << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}