#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    int countA = 0, countD = 0;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
        if (s[i] == 'D')
        {
            countD++;
        }
    }
    if (countA > countD)
    {
        cout << "Anton";
    }
    else if (countA < countD)
    {
        cout << "Danik";
    }
    else
        cout << "Friendship";
}