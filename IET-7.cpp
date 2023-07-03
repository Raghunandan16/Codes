#include <bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }
    int mid = (s + e) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] > key)
    {
        return binarysearch(arr, s, mid - 1, key);
    }
    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, e, key);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int start = 0;
    int end = 5;
    int key = 4;
    cout<<binarysearch(arr, 0, 5, 4);
}