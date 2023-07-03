#include <iostream>
using namespace std;
int main()
{
    int n, a;
    int count = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = a;
    }
    int j = 1;
    while (j < n)
    {
        if (arr[j - 1] == arr[j])
        {
            j++;
        }
        else
        {
            count++;
            j++;
        }
    }
    cout << count;
}