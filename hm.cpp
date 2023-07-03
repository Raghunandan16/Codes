#include <iostream>
using namespace std;

int main(){ 
    string name;
    int age;
    cout<< "what is your name: ";
    getline(cin, name );
    cout<<  "Enter you age " << name <<" : " ;
    cin>> age;
    cout<< "you are "<< age << " years old. Enjoy your stay " << name ;



}