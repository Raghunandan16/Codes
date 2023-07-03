#include <iostream>
using namespace std;

string getDayName(int DayNum){
    string DayName;
    switch (DayNum)
    {
    case 1:
    DayName = "Monday";
     break;
    case 2:
    DayName = "Tuesday";
     break;
     case 3:
    DayName = "Wednesday";
     break;
     case 4:
    DayName = "Thursday";
     break;
     case 5:
    DayName = "Friday";
     break;
     case 6:
    DayName = "Saturday";
     break;
     case 7:
    DayName = "Sunday";
     break;
    default:
    DayName = " not yours because of invalid Day Number. Go back to kindergarden ;)";}
    
    return DayName; }
    int main() {
        int number;
        cout<< "enter your number: ";
        cin>> number;
        cout<< "The day is "<< getDayName(number); 
        return 0;
    }

