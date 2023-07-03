#include <stdio.h>
float proterm(int i, float value, float x[])
{
    float pro = 1;
    for (int j = 0; j < i; j++)
    {
        pro = pro * (value - x[j]);
    }
    return pro;
}
void dividedDiffTable(float x[], float y[][10], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            y[j][i] = (y[j][i - 1] - y[j + 1][i - 1]) / (x[j] - x[i + j]);
        }
    }
}
float applyFormula(float value, float x[], float y[][10], int n)
{
    float sum = y[0][0];
    for (int i = 1; i < n; i++)
    {
        sum = sum + (proterm(i, value, x) * y[0][i]);
    }
    return sum;
}
void printDiffTable(float y[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%0.4f\t", y[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n = 5;
    float value, sum, y[10][10];
    float x[] = {0, 1, 2, 3, 4};
    y[0][0] = 1.0;
    y[1][0] = 1.5;
    y[2][0] = 2.2;
    y[3][0] = 3.1;
    y[4][0] = 4.6;
    dividedDiffTable(x, y, n);
    printDiffTable(y, n);
    value = 7;
    printf("\nValue at %f is %f", value, applyFormula(value, x, y, n));
    return 0;
}