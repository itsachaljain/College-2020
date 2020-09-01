#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r, x, y, theta;
    const float PI = 3.1415;

    cout << "Enter rectangular co-ordinates (x, y): ";
    cin >> x >> y;

    r = sqrt(x * x + y * y);
    theta = atan(y / x);
    theta = theta * (180 / PI);

    cout << "Polar Coordinates are: "
         << "(" << r << ", " << theta << ")" << endl;
}