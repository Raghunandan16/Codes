#include <bits/stdc++.h>
using namespace std;
int main()
{
    double m[3][4];
    m[0][0] = 2, m[0][1] = 1, m[0][2] = 1, m[0][3] = 10;
    m[1][0] = 3, m[1][1] = 2, m[1][2] = 3, m[1][3] = 18;
    m[2][0] = 1, m[2][1] = 4, m[2][2] = 9, m[2][3] = 16;
    double a, b, c;
    a = 2, b = 3, c = 1;
    for (int i = 0; i < 4; i++)
    {
        m[1][i] = m[1][i] * a / b - m[0][i];
        m[2][i] = m[2][i] * a / c - m[0][i];
    }
    b = m[1][1];
    c = m[2][1];
    for (int i = 0; i < 4; i++)
    {
        m[2][i] = m[2][i] * b / c - m[1][i];
    }
    double x, y, z;
    z = m[2][3] / m[2][2];
    y = (m[1][3] - m[1][2] * z) / m[1][1];
    x = (m[0][3] - m[0][2] * z - m[0][1] * y) / m[0][0];

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}