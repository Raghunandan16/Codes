#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int start = 0;
    int end = 5;
    int key = 12;
    bool flag = false;
    while (start < end)
    {
        if (arr[start] + arr[end] == key)
        {
            cout << "1";
            flag = true;
            break;
        }
        if (arr[start] + arr[end] > key)
        {
            end = end - 1;
        }
        if (arr[start] + arr[end] < key)
        {
            start = start + 1;
        }
    }
    if (flag == false)
    {
        cout << "0";
    }
}