#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, h, count = 0;
    cin >> n;
    int arrh[n];
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        cin>>h>>a;
        arrh[i]=h;
        arra[i]=a;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j && arra[i]==arrh[j]){
                count++;
            }
        }
        
    }
    cout<<count;
}
