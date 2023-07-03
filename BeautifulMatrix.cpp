#include <iostream>
using namespace std;
int main(){
    int arr[5][5];
    int in, ans1, ans2, ans;
for (int i = 0; i <5; i++)
{
    for (int j = 0; j <5; j++)
    {
        cin>>in;
        arr[i][j]=in;
    }}
    for (int i = 0; i <5; i++)
{
    for (int j = 0; j <5; j++)
    {
        if (arr[i][j]==1){
            ans1 = i-2;
            ans2 = j-2;
            if(ans1<0){
                ans1=-ans1;
            }
              if(ans2<0){
                ans2=-ans2;
            }
            ans = ans1+ans2;
            break;
        }
    }
} cout<<ans;
}
