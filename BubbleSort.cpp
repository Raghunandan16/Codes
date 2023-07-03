#include <bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int> &vec)
{   
    bool flag=false;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size()-i-1; j++)
        {
            if(vec[j]>vec[j+1]){
                flag=true;
                swap(vec[j],vec[j+1]);
            }
        }
        if(flag==false){
            break;
        }
    }
}
int main()
{
    vector<int> vec(7);
    vec = {1, 67, 43, 64, 12,0,54};
    BubbleSort(vec);
    for(auto it:vec){
        cout<<it<<" ";
    }
}