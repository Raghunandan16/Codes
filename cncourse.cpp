#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*ll factorial(ll n){
    if(n<2) return 1;
    return n*factorial(n-1);
}*/
/*ll powmult(ll x, ll n){
    if(n==1) return x;
    return x*powmult(x,n-1);
}*/
/*ll countdigit(ll n,ll count){
    if(n<10) return count+1;
    return countdigit(n/10,++count);
}*/
/*ll fibo(ll n){
    if(n<2) return n;
    return fibo(n-1)+fibo(n-2);
}*/
/*bool isSorted(int arr[], int size){
    if(size<2){
        return true;
    }
    if(arr[0]>arr[1]) return false;
    return isSorted(arr+1,size-1);
}*/
/*vector<int> AllIndex(vector<int>&arr, vector<int>&vec, int x, int n, int ind){
    if(ind<n){
        if(arr[ind]==x) vec.push_back(ind);
        return AllIndex(arr,vec,x,n,ind+1);
    }
    return vec;
}*/
/*vector<char> pi(string s, vector<char>&vec, int ind){
    if(ind<s.length()){
    if(s[ind]=='p'){
        if(s[ind+1]=='i'){
            vec.push_back('3');
            vec.push_back('.');
            vec.push_back('1');
            vec.push_back('4');
            return pi(s,vec,ind+2);
        }
        vec.push_back('p');
        return pi(s,vec,ind+1);
    }
    else{
        vec.push_back(s[ind]);
        return pi(s,vec,ind+1);
    }
    }
    return vec;

}*/
/*int stringLength(char str[]){
    if(str[0]=='\0') return 0;
    return 1+stringLength(str+1);
}*/
/*void ModifyString(char str[]){
    if(str[0]=='\0') return;
    if(str[0]!='x'){
        return ModifyString(str+1);
    }
    if(str[0]=='x'){
        int i=1;
        for (;str[i]!='\0'; i++)
        {
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        return ModifyString(str);
    }
}*/
void RemoveDuplicates(char str[]){
    if(str[0]=='\0') return;
    if(str[0]!=str[1]) return RemoveDuplicates(str+1);
    if(str[0]==str[1]){
        int i=1;
        for(; str[i]!='\0'; i++){
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        return RemoveDuplicates(str);
    }
    
}
int main(){
    char str[1000];
    cin>>str;
    RemoveDuplicates(str);
    cout<<str;
}