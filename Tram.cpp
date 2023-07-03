#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    int sum=0,temp=0;
    for (int i = 0; i < n; i++){;
        cin>>a>>b;
        sum=sum-a+b;
        if(sum>temp){
            temp =sum;
        }
    }
      
    cout<<temp;
}