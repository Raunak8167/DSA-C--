#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> M1(n, vector<int>(n));
    vector<vector<int>> M2(n, vector<int>(n, 0)); // all elements start at zero

    cout << "Enter elements of matrix M1:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> M1[i][j];
        }
    }

    // Row sums go on the main diagonal of M2
    for (i = 0; i < n; i++)
    {
        int rowSum = 0;
        for (j = 0; j < n; j++)
        {
            rowSum += M1[i][j];
        }
        M2[i][i] = rowSum; // M2(i, i)
    }

    // Column sums go on the opposite diagonal of M2
    for (j = 0; j < n; j++)
    {
        int colSum = 0;
        for (i = 0; i < n; i++)
        {
            colSum += M1[i][j];
        }
        M2[j][n - 1 - j] = colSum; // M2(j, n-1-j)
    }

    cout << "Matrix M2:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << M2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}