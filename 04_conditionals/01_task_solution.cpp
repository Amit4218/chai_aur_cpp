#include<iostream>
#include<string>

using namespace std;

int main(){

    /*
        If Statement:

        Challenge: Write a program that checks if the user wants to order Green Tea. 
        If the user types "Green Tea," the program should confirm their order.
    
    */

    string order;

    cout << "Type \"Green tea\" to confirm ur green tea order: " << endl;

    getline(cin, order);

    if(order == "Green tea"){
        cout << "Your order has been confirmed" << endl;
       }

    return 0;
}