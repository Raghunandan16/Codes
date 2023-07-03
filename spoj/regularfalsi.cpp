#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return exp(x) - x * x + 3 * x - 2;
}
double c, x;
double e = 0.000001;
void regular(double a, double b)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "Incorrect guess";
        return;
    }
    c = (a * f(b) - b * f(a)) / (f(b) - f(a));
    while (true)
    {
        a = b;
        b = c;
        x = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if (abs(x - c) < e)
            break;
        c = x;
    }
}

int main()
{
    cout.precision(5);
    double a, b;
    a = 0;
    b = 1;
    regular(a, b);
    cout << c;
}