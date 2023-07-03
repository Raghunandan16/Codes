#include <stdio.h>
void forward(float x[4], float y[4][4], int n, float a)
{
    int i, j;
    float h, u, sum, p;
    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }
    printf("\n The forward difference table is:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n - i; j++)
        {
            printf("%f\t", y[i][j]);
        }
    }
    p = 1.0;
    sum = y[0][0];
    h = x[1] - x[0];
    u = (a - x[0]) / h;
    for (j = 1; j < n; j++)
    {
        p = p * (u - j + 1) / j;
        sum = sum + p * y[0][j];
    }
    printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
}
void backward(float x[4], float y[4][4], int n, float a)
{
    int i, j;
    float h, u, sum, p;
    for (j = 1; j < n; j++)
    {
        for (i = j; i < n; i++)
        {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }
    printf("\nThe backward difference table is:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j <= i; j++)
        {
            printf("%f\t", y[i][j]);
        }
    }
    p = 1.0;
    sum = y[n - 1][0];
    h = x[1] - x[0];
    u = (a - x[n - 1]) / h;
    for (j = 1; j < n; j++)
    {
        p = p * (u + j - 1) / j;
        sum = sum + p * y[n - 1][j];
    }
    printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
}

int main()
{
    int i, j;
    int n = 4;
    float x[4] = {1, 2, 3, 4};
    float y[4][4] = {
        {1, 0, 0, 0},
        {8, 0, 0, 0},
        {27, 0, 0, 0},
        {64, 0, 0, 0},
    };
    // a. At 1.5
    float a = 1.5;
    forward(x, y, n, a);
    backward(x, y, n, a);
    // b. At 5
    printf("\n\n");
    a = 5;
    forward(x, y, n, a);
    backward(x, y, n, a);
    return 0;
}
