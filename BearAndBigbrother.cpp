#include <iostream>
using namespace std;
int main(){
    int a, b, count=0;
    cin>>a>>b;
while(b>=a){
    a=3*a;
    b=2*b;
    count++;
}
cout<<count;
}