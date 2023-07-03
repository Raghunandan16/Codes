#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
 while (t--){
     int n,k,j=1,z,q=0; 
     cin>>n>>k;
     int arr[n];
     int arr1[n];
     
     for ( int i=0; i<=n-1; i++){
         arr[i]=j;
         j++;
     }
     int p=(int)log2(n);
     if(k>p){
         p=k%p;
     }
     else p=k;
      while (p--){
         z=0; 
         j=1;
         for( int i=0 ; i<=n-1;i++){
             if (i<(n/2)){
                 arr1[i]=arr[z];
                 z=z+2;
             }
             else{
                 arr1[i]=arr[j];
                 j=j+2;
             }
         }
         
         for( int i=1 ; i<=n-1;i++){
             arr[i]=arr1[i];
              
         }
      }
         
     for( int i=0 ; i<=n-1; i++){
            
             printf("%d ", arr[i]);
         }
         printf("\n");
     
 }
 return 0;
}