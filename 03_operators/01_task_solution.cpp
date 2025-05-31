#include<iostream>

using namespace std;

int main(){

    // Challenge: Create a program that calculates the total price of tea cups. 
    // The user inputs the number of cups they want and the price per cup. The program 
    // should calculate the total price, apply a 5% discount if the total is above a certain amount, 
    // and show the final price.

    int total_tea_cups;
    
    float price_per_cup, total_price, discounted_price;

    cout << "Enter the total number of tea cups: ";
    cin >> total_tea_cups;

    cout << "Enter the price of the tea (per cup): ";
    cin >> price_per_cup;

    total_price =  (total_tea_cups * price_per_cup);

    if (total_price > 100){

        discounted_price = total_price - (total_price * 0.05);

        cout << "You'r total would be: " << discounted_price << endl;

    }else{
        cout << "You'r total would be: " << total_price << endl;
    }
    

    return 0;
}