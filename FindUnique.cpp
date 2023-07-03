#include <iostream>
using namespace std;
int ans(int arr[7]){
    int unique=0;
    for (int i = 0; i < 7; i++)
    {
        unique^=arr[i];
    }
    return unique;
}
int main(){
    int arr[]={2,3,3,4,2,6,4};
    cout<<ans(arr);
}
