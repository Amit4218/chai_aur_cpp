#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge 1: While Loop:
    
        Write a program that keeps asking the user to input the number of tea bags they have left. 
        Stop when the number of bags is 0, and print a message that they are out of tea bags.

    */

    int tea_bags;

    while (true){

        cout << "Enter the number of tea bags left : ";
        cin >> tea_bags;

        if(tea_bags == 0){

            cout << "You are out of tea bags" << endl;
        }
    }

    return 0;
}