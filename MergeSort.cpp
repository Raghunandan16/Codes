#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void merge(int arr[],int l, int m, int r){
    int n1=m-l+1;
    int n2=r-m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i]=arr[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j]=arr[l+n1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }

}
void MergeSort(int arr[], int l, int r ){
    if(l>=r) return;
    if(r>l){
        int m = l + (r-l)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    int arr[10]={12 ,11, 13, 5, 6, 7,45,46,50,47};
    MergeSort(arr,0,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
}