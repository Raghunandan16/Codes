#include<iostream>
using namespace std;
 
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int c1=0,c2=0;
    int len=s1.size();// Size of s1 and s2 are the same 
    for (int i = 0; i < len; i++)
    {
        if( (s1[i]==s2[i]) or ( ((int)(s1[i]))== ((int)(s2[i]))+32 )  or ( ((int)(s2[i]))== ((int)(s1[i]))+32  )      )
        {
            continue;
        }
        else if(    ((int)(s1[i]))>((int)(s2[i])) & ( ((int)(s1[i]))!=((int)(s2[i]))+32 )     ){
           c1=c1+(int)(s1[i]); 
        }  
        else if( ((int)(s2[i]))>((int)(s1[i])) & ( ((int)(s2[i]))!=((int)(s1[i]))+32 )     )   
        {
            c2=c2+(int)(s2[i]);  
        }
        else{
            continue;
        }
    }
  
 
    if(c1>c2){
        cout<<("1");
    }
    else if(c2>c1){
        cout<<("-1");
    }
    else if(c1==c2){
        cout<<("0");
            }
return 0;
}