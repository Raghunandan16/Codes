#include <iostream>
using namespace std;
int main()
{
    int n, a, ans;
    cin >> n;
    int arr[n];
    int min = INT32_MAX;
    int max= INT32_MIN;
    int minIndex;
    int maxIndex;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = a;
        if(arr[i]<=min){
            min=arr[i];
            minIndex=i;
        }
         if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
    }
    if(maxIndex>minIndex){
        ans=maxIndex-minIndex+n-2;
    }
    else {ans = maxIndex-minIndex+n-1;}
    cout<<ans;

}