#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int p, n;

    for (int n = 1; n <= 10; n++)
    {
        cout << endl;
        cout << n << ": ";
        for (p = 1; p <= 10; p++)
        {
            float amount = pow(1.15, n) * p * 1000;
            cout << amount << ", ";
        }
    }

    cout << endl;
}