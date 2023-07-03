#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll a, c;
        int b,d;
        cin >> a >> b >> c >> d;
        int z=min(b, d);
        b = b - z;
        d = d - z;
        if (b >= 7)
        {
            cout << ">"<< "\n";
        }
        else if (d >= 7)
        {
            cout << "<"<< "\n";
        }
        else{
            for (int i = 0; i < b; ++i)
            {
                a=a*10;
            }
            for (int i = 0; i < d; ++i)
            {
                c=c*10;
            }
            if(a>c){
                cout << ">"<< "\n";
            }
            else if(a<c){
                cout << "<"<< "\n";
            }
            else cout<<"="<<"\n";
        }
    }
}
