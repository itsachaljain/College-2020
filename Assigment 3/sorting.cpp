#include <iostream>
using namespace std;

int main()
{
    int i, j, decr;
    int n[10];
    cout << "Enter any 10 numbers!" << endl;

    for (i = 0; i < 10; i++)
    {
        cin >> n[i];
    }

    for (i = 0; i < 10; i++)
    {

        for (j = i + 1; j < 10; j++)
        {
            if (n[i] < n[j])
            {
                decr = n[i];
                n[i] = n[j];
                n[j] = decr;
            }
        }
    }

    cout << "Decreasing Order is: ";

    for (i = 0; i < 10; i++)
    {
        cout << n[i] << ", ";
    }
    cout << endl;
}