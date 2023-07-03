#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    double n, p, per=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>p;
       per=per+p;
    }
    double ans = (per/n);
    cout<< setprecision(14)<<ans;
}