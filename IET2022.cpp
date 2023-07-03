#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h;
    cin>>h;
    for (int i = 0; i < h; i++)
    {
        cout<<"*";
    }
    cout<<"\n";
    
    for (int i = 1; i < h-1; i++)
    {
        for (int j = i; j < h-1; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<"\n";
    }
    for (int i = 0; i < h; i++)
    {
        cout<<"*";
    }
}