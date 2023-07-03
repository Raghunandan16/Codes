#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n, sum=0;
        cin>>n;
        for (int j = 0; j<n; j++)
        {
            int a;
            cin>>a;
            sum = sum+ a;
        }
        if(sum%n==0){
            cout<<"0"<<endl;
        }
        else cout<<"1"<<endl;
    }
    
}