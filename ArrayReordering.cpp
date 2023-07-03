#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2)
                v.push_back(x);
        }
        int len=n-v.size();
    int p=v.size()-1;
        int c=0;
        for(int i=0;i<p;i++)
        {
            for(int j=i+1;j<p+1;j++)
            {
                    c+=__gcd(v[i],v[j])>1;
            }
        }
        cout<<c+(len*(len-1))/2+len*v.size()<<endl;
    }
}