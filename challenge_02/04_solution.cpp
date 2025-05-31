#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge 4: Bitwise Operators

        Write a program that uses bitwise AND (&) to check which tea types are in stock. 
        The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow 
        the user to check availability by inputting the tea type (1, 2, or 4), and display a
        message saying whether that tea is in stock or not.
    
    */

    int green_tea = 1, Oolong_tea = 4 , Black_tea = 2;
    int tea;
    int stock = 5;

    cout << "To check availability\nPlease Enter\n1 for Green tea\n2 for Black tea\n4 for Oolong tea" << endl;
    cin >> tea;

    if(tea != green_tea && tea != Oolong_tea && tea != Black_tea){

        cout << "Invalid Input" << endl;

    }else if(tea & stock){

        cout << "The tea is in stock" << endl;

    }else{
        cout << "The tea is not in stock" << endl;
    }

    return 0;
}