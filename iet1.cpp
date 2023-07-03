#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int q;
    cin >> q;
    vector<int> vec;
    multiset<int>s;
    int count=0;
    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            s.insert(x-count);
        }
        else if(t==2){
            int x;
            cin>>x;
            count+=x;
        }   
        else{
            auto it=s.begin();
            cout<<*it+count<<"\n";
            s.erase(s.begin());
        }
    }
}
