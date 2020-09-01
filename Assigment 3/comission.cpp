#include <iostream>

using namespace std;

int main()
{
    char name[100];
    int code;
    float sales, actual;

    cout << "Enter Name: ";
    cin.get(name, 100);

    cout << "\nEnter code: ";
    cin >> code;

    cout << "\nEnter Sales: ";
    cin >> sales;

    if (sales >= 100000)
    {
        actual = sales * 0.12;
    }
    else if (sales < 100000 && sales >= 75000)
    {
        actual = sales * 0.1;
    }
    else if (sales < 75000 && sales >= 50000)
    {
        actual = sales * 0.06;
    }
    else if (sales < 50000 && sales >= 25000)
    {
        actual = sales * 0.03;
    }
    else if (sales < 25000)
    {
        actual = sales * 0.01;
    }
    else
    {
        cout << "Please Enter Valid Amount!";
    }
    cout << "Name: " << name << endl;
    cout << "Code: " << code << endl;
    cout << "Total Sales: " << sales << endl;
    cout << "Comission Earned: " << actual << endl;
}