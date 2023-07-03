#include <iostream>
using namespace std;
int sum=0;
void Rev(int n){
    if(n==0){
        return;
    }
    int rem=n%10;
    sum=sum*10+rem;
    Rev(n/10);
}
int main(){
    Rev(1230);
    cout<<sum;
}