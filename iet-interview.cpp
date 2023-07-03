#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    vector<vector<int>>vec(2, vector<int>(2));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>vec[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<vec[i][j];
        }
       cout<<"\n";
    }
    
}