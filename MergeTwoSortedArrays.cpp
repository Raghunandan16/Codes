#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int m, int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    if(i==m){
        for (; j!=n; j++)
        {
            cout<<arr2[j]<<" ";
        }
    }
    else{
        for(;i!=m; i++)
        {
            cout<<arr1[i]<<" ";
        }
    }
}
int main(){
    int arr1[4]={10,20,30,40};
    int arr2[4]={5,15,25,30};
    merge(arr1,arr2,4,4);
}