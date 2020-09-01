#include <iostream>

using namespace std;

int main()
{
    int i;
    char *str[10] = {"I", "IN", "IND", "INDI", "INDIA", "INDI", "IND", "IN", "I"};

    for (i = 0; i < 10; i++)
    {
        cout << str[i] << endl;
    }
}