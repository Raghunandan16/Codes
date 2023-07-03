#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    s1 = "I hate";
    s2 = "I love";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i != n)
        {
            cout << s1 + " that ";
        }
        if (i % 2 == 0 && i != n)
        {
            cout << s2 + " that ";
        }
        if (i % 2 != 0 && i == n)
        {
            cout << s1 + " it";
        }
        if (i % 2 == 0 && i == n)
        {
            cout << s2 + " it";
        }
    }
}