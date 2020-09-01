#include <iostream>

using namespace std;

int main()
{
    int fact = 1, n, i = 1;
    cout << "Enter the number: ";
    cin >> n;
    do
    {
        fact = fact * i;
        i++;
    } while (i <= n);

    cout << "Factorial of " << n << " is " << fact << endl;
}