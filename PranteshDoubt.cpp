



#include <iostream>
using namespace std;
int main(){
    int count=0;
    int i=1;
    while(count<20){
        int x;
        cout<<"Choose your number: ";
        cin>>x;
        count=count+x;
        int choice=5*i-count;
        cout<<"Computer chooses "<< choice <<endl;
        count=5*i;
        cout<<"count = "<<count<<endl;
        i++;
    }
    if(count==20){
        int a;
        cout<<"Choose your number: ";
        cin>>a;
        count=count+a;
    }
    if(count>21){
        cout<<"Trying to cheat? You have lost you looser!!";
    }
    else {cout<<"count = "<<count<<endl;
         cout<<"You Lost!!";}

}