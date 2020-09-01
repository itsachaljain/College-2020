#include <iostream>

using namespace std;

int main()
{
    int n1 = 0, n2 = 1, i, n3, n;

    cout << n1 << ", " << n2;

    while (i < 7)
    {

        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << ", " << n3;
        i++;
    }
    cout << endl;
}