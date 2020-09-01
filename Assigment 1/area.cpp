//area

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float l, a, b, c, r, s, area;

    cout << "1. Area of triangle";
    cout << "\n2. Area of circle";
    cout << "\n3. Area of rectangle";
    cout << "\n4. Area of square";
    cout << "\nEnter your choice: ";

    int ch;
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "Enter sides of the triangle: ";
        cin >> a;
        cin >> b;
        cin >> c;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        break;
    case 2:
        cout << "Enter radius of the circle: ";
        cin >> r;
        area= 3.14 * r*r;
        break;
    case 3:
        cout << "Enter length and breadth of rectangle: ";
        cin >> l;
        cin >> b;
        area=(l*b);

        break;
    case 4:
        cout << "Enter side of the square: ";
        cin >> l;
        area= l*l;

        break;
    default:
        cout << "Invalid choice..Try Again!"<< endl;
        return 0;
        break;
    }
    cout << "Area is " << area << endl;
}