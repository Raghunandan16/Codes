#include <iostream>
using namespace std;
int main(){
    int n, h, a;
    int count=0;
    cin>>n>>h;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a>h){
            count+=2;
        }
        else count++;
    }
    cout<<count;
}