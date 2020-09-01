#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    cout << "Enter value of n for n*n matrix: ";
    cin >> n;
    int A[n][n];
    int B[n][n];
    int mult[n][n];

    cout << "Matrix 1: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter Matrix: ";
            cin >> A[i][j];
        }
    }

    cout << "Matrix 2: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter Matrix: ";
            cin >> B[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            mult[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << endl
         << "Product Matrix: " << endl;

    for (i = 0; i < n; i++)

        for (j = 0; j < n; j++)
        {
            cout << " " << mult[i][j];
            if (n == n - 1)

                cout << endl;
        }

    cout << endl;
}