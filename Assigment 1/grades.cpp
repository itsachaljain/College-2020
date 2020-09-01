//grades
#include <iostream>

using namespace std;

int main() {
    string n;
    int r;
    float one, two, three;
    cout << "Enter your name: ";
    cin >> n;
    cout << "Enter your Roll no: ";
    cin >> r;
    cout << "Enter your Subject 1 marks: ";
    cin >> one;
    cout << "Enter your Subject 2 marks: ";
    cin >> two;
    cout << "Enter your Subject 3 marks: ";
    cin >> three;
    float total = one + two + three;
    cout << "Total Marks obtained are " << total;
    float percentage = (total/300) * 100;
    cout <<"\nYour Percantage is " << percentage << endl;
    if (percentage > 80)
    {
        cout << "Grade is A" << endl;
    }
    else if (80 >= percentage && percentage > 60)
    {
        cout << "Grade is B" << endl;
    }
    else if (60 >= percentage && percentage > 45)
    {
        cout << "Grade is C" << endl;
    }
    else if (45 >= percentage && percentage > 33)
    {
        cout << "Grade is D" << endl;
    }
    else if (33 > percentage)
    {
        cout << "Grade is F" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}