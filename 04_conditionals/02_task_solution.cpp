#include<iostream>

using namespace std;

int main(){

    /*
    
        If-Else Statement:

        Challenge: Write a program that checks if a tea shop is open. If the current hour (input by the user)
        is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.
    
    */

    int hour;

    cout << "Enter the time: (0-23) " << endl;

    if (hour > 8 && hour <= 18){
        
        cout << "Shop is open" << endl;

    }else{
        cout << "shop is closed" << endl;   
    }
    

    return 0;
}
