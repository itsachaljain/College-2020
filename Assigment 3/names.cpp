#include <iostream>

using namespace std;

int main()
{
    char *str[10] = {"Achal", "Jatin", "Naman", "Aditya", "Steve", "Mike", "David", "Jony", "Tim", "Craig"};

    for (int i = 0; i < 10; i++)
    {
        cout << str[i] << endl;
    }
}