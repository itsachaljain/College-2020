#include <iostream>

using namespace std;

void AandD(float bp)
{
    float da, hra, cca, pf, lic, gp, np;
    if (bp >= 10000)
    {
        da = 0.4 * bp;
        hra = 0.25 * bp;
        cca = 300;
        pf = 500;
        lic = 400;
    }
    else if (bp <= 10000 && bp > 8000)
    {
        da = 0.35 * bp;
        hra = 0.2 * bp;
        cca = 300;
        pf = 450;
        lic = 300;
    }
    else if (bp <= 8000 && bp > 6000)
    {
        da = 0.33 * bp;
        hra = 0.18 * bp;
        cca = 270;
        pf = 400;
        lic = 250;
    }
    else if (bp <= 6000 && bp > 4000)
    {
        da = 0.3 * bp;
        hra = 0.15 * bp;
        cca = 270;
        pf = 300;
        lic = 225;
    }
    else if (bp <= 4000)
    {
        da = 0.27 * bp;
        hra = 0.12 * bp;
        cca = 250;
        pf = 250;
        lic = 200;
    }
    else
    {
        cout << "Provide Valid Input!" << endl;
    }

    gp = bp + da + hra + cca;
    np = gp - pf - lic;

    cout << "Gross Salary is: Rs" << gp << endl;
    cout << "Net Salary is: Rs" << np << endl;
}

int main()
{
    int c, bp;
    string n;

    cout << "Enter Employee Code: ";
    cin >> c;

    cout << "Enter Your Name: ";
    cin >> n;

    cout << "Enter Your Basic Pay: Rs";
    cin >> bp;

    cout << "Emp Code is: " << c << endl;
    cout << "Name is: " << n << endl;
    cout << "Basic Salary is: Rs" << bp << endl;

    AandD(bp);
}