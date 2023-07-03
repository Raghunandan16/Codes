#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x[4] = {-1, 1, 4, 7};
    double y[4] = {-2, 0, 63, 342};
    double xp = 5;
    double yp = 0;
    for (int i = 0; i < 4; i++)
    {
        double p = 1;
        double y1 = y[i];
        for (int j = 0; j < 4; j++)
        {

            if (j != i)
            {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp += p * y1;
    }
    cout << "Interpolating value at x=5 is " << yp;
}