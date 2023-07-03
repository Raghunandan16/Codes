#include <bits/stdc++.h>
using namespace std;
double f1(double x)
{
    return x * x * x - 2 * x * x - 5;
}
double f2(double x)
{
    return 3 * x * x - 4 * x;
}
double c, x;
double e = 0.00001;
void newton(double a, double b)
{
    c = (a + b) / 2;
    while (true)
    {
        x = c - (f1(c) / f2(c));
        if (abs(c - x) < e)
            break;
        c = x;
    }
}
int main()
{
    cout.precision(5);
    double a, b;
    a = 2;
    b = 3;
    newton(0, 2.5);
    cout << "root " << c;
}