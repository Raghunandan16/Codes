#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return sqrt(1 - pow(x, 3));
}
double c, x;
double e = 0.0001;
void fixed(double a, double b)
{
    c = (a + b) / 2;
    while (true)
    {
        x = f(c);
        if ((x - c) < e)
            break;
        c = x;
    }
}
int main()
{
    cout.precision(3);
    double a, b;
    a = 0;
    b = 1;
    fixed(a, b);
    cout << x;
}