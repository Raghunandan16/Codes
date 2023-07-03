#include <bits/stdc++.h>
using namespace std;
double fx(double y, double z)
{
    return (-11 - y + 2 * z) / 8;
}
double fy(double x, double z)
{
    return (22 - 2 * x - z) / 9;
}
double fz(double x, double y)
{
    return (-15 + x + 2 * y) / 11;
}

int main()
{
    double x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
    e = 0.0001;
    cout.precision(4);
    cout
        << "x   y   z" << endl;
    while (true)
    {
        x1 = fx(y0, z0);
        y1 = fy(x1, z0);
        z1 = fz(x1, y1);
        cout << x1 << " " << y1 << " " << z1 << endl;
        e1 = abs(x1 - x0);
        e2 = abs(y1 - y0);
        e3 = abs(z1 - z0);
        if (!(e1 > e && e2 > e && e3 > e))
            break;
        x0 = x1, y0 = y1, z0 = z1;
    }
}