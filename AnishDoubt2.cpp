#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i]);
    }
    int i = 0;
    if (s.length() >= 8)
    {
        while (i < s.length() - 6)
        {
            int j = i;
            while (j < i + 7)
            {
                if (v[j] == v[j + 1])
                {
                    j++;
                }
                else break;
            }
            if(j==i+7){
                cout<<"YES"<<endl;
                break;
            }
            else i++;
        }
    }
    if(s.length()<8){
        cout<<"NO"<<endl;
    }
    if(i==s.length()-6){
        cout<<"NO"<<endl;
    }
}
