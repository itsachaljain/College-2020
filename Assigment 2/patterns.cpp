#include <iostream>

using namespace std;

int main()
{
    int r, c;

    //1
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }

    cout << endl;

    //2
    for (r = 5; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }

    cout << endl;

    //3
    for (r = 1; r <= 5; r++)
    {
        for (c = 5; c >= r; c--)
        {
            cout << c << " ";
        }
        cout << "\n";
    }

    cout << endl;

    //4
    for (r = 5; r >= 1; r--)
    {
        for (c = r; c <= 5; c++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }

    cout << endl;

    //5
    for (r = 1; r <= 5; r++)
    {
        for (c = r; c >= 1; c--)
        {
            cout << c << " ";
        }
        cout << "\n";
    }

    cout << endl;

    //6
    for (r = 5; r >= 1; r--)
    {
        for (c = 5; c >= r; c--)
        {
            cout << c << " ";
        }
        cout << "\n";
    }
}
