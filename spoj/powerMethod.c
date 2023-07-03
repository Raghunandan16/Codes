#include <stdio.h>
#include <math.h>
#define SIZE 3
int main()
{
    float a[SIZE][SIZE] = {{2, 3, -1}, {1, 0, 1}, {3, 1, 1}};
    float x[SIZE] = {0, 1, 0};
    float x_new[SIZE];
    float temp, lambda_new, lambda_old, error = 0.0001;
    int i, j, n = 3, step = 1;
    lambda_old = 1;
up:
    for (i = 0; i < n; i++)
    {
        temp = 0.0;
        for (j = 0; j < n; j++)
        {
            temp = temp + a[i][j] * x[j];
        }
        x_new[i] = temp;
    }
    for (i = 0; i < n; i++)
    {
        x[i] = x_new[i];
    }
    lambda_new = fabs(x[0]);
    for (i = 1; i < n; i++)
    {
        if (fabs(x[i]) > lambda_new)
        {
            lambda_new = fabs(x[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        x[i] = x[i] / lambda_new;
    }
    printf("\n\nSTEP-%d:\n", step);
    printf("Eigen Value = %f\n", lambda_new);
    printf("Eigen Vector:\n");
    for (i = 0; i < n; i++)
    {
        printf("%f\t", x[i]);
    }
    if (fabs(lambda_new - lambda_old) > error)
    {
        lambda_old = lambda_new;
        step++;
        goto up;
    }
    return (0);
}