#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double armstrong=0;
    double originaln=n;

    while (n>0)
    {
        int lastdigit=n%10;
        armstrong += pow(lastdigit,3);
        n=n/10;
    }
    if (armstrong==originaln)
    {
        cout<<"Arm strong";
    }
    else {cout<<"Not an armstrong";}
    
    return 0;
}