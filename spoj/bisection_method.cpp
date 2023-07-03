#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return 2 - 5 * x * x - pow(2.71828, x);
}
double c;
double e = 0.00001;
void bisection(double a, double b)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "Incorrect guess";
        return;
    }
    c = a;
    while (b - a >= e)
    {
        c = (b + a) / 2;
        if (f(c) == 0)
        {
            cout << "root = " << c;
            break;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
}

int main()
{
    cout.precision(6);
    double a, b;
    a = 0;
    b = 1;
    bisection(a, b);
    cout << c;
}