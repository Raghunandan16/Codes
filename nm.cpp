#include <bits/stdc++.h>
using namespace std;
double eps = 1e-5;
double f(double x) { return (pow(x, 3) - 2 * pow(x, 2) - 5); }
double f1(double x) { return (3 * pow(x, 2) - 4 * x); }
int main()
{
    double xp = 0, xc = 2.5;
    while (xc - xp > eps)
    {
        xp = xc;
        xc = xp - f(xp) / f1(xp);
    }
    cout << setprecision(5) << xc << endl;
    return 0;
}