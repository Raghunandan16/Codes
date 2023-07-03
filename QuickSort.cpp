#include <bits/stdc++.h>
using namespace std;
int Partition(int arr[], int s, int e){
    int pivot = arr[s];
    int i=s, j=e;
    while(i<j){
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[s],arr[j]);
    return j;
}
void quicksort(int arr[],int s, int e){
    if(s>=e)return;
    int pivot = Partition(arr,s,e);
    quicksort(arr,s,pivot-1);
    quicksort(arr,pivot+1,e);
}
int main(){
    int arr[]={4,1,2,10,4,5,8,6,9};
    quicksort(arr,0,8);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
}