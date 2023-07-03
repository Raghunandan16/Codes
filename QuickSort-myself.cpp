#include<bits/stdc++.h>
using namespace std;
void partition(int arr[],int s, int e, int count){
    int i=s,j=e;
    while(i<s+count && j>s+count){
        if(arr[i]<=arr[s+count]) i++;
        else if(arr[j]>arr[s+count])j--;
        else{
            swap(arr[i],arr[j]);
            i++;j--;
        }
    }
}
void quicksort(int arr[],int s,int e){
    if(s>=e) return;
    int count=0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=arr[s]) count++;
    }
    swap(arr[s],arr[s+count]);
    partition(arr,s,e,count);
    quicksort(arr,s,s+count-1);
    quicksort(arr,s+count+1,e);
}
int main(){
    int arr[]={10,3,2,1,5,6,10,9};
    quicksort(arr,0,7);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
}
// Code By Optimus