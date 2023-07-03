#include <iostream>
using namespace std;
int main(){
    int n,a;
    string s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a==0){
            s="EASY";
        }
        else{
            s="HARD";
            break;
        }
    }
    cout<<s;
    
}