#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i];
    }
    bool flag=false;
    if(n==1){
        if (arr[0] % 2 == 0)
            cout << "0" << "\n";
        else cout<< "-1" << "\n";    
    }
    else{if (arr[n - 1] % 2 == 0)
    {
        cout << "0" << "\n";
    }
    else
    {
        if (arr[0] % 2 == 0)
            cout << "1" << "\n";
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i] % 2 == 0)
                {
                       flag=true;
                       break;
                }
            }
            if(flag==true)cout<<"2"<<"\n";
            else cout<<"-1"<<"\n";
        }
    }}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}