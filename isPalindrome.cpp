#include <iostream>
using namespace std;
bool isPalindrome(string str, int s, int e){
    if(s>e){
        return true;
    }
    if(str[s]==str[e]) return isPalindrome(str,s+1,e-1);
    return false;
}
int main(){
    string str;
    str="aaaaaab";
    cout<<isPalindrome(str,0,str.length()-1);
}