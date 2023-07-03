#include <iostream>
using namespace std;
int main(){
    int n, a, b, count;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(a%b==0){
            count=0;
        }
        else count=b-a%b;
        cout<<count<<endl;
    }
    
}