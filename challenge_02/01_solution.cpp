#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge 1: Arithmetic Operators

        Write a program that calculates the price of tea packs. A user enters the number of tea packs they want,
        and the price per pack. Apply a 10% tax to the total price and display the final cost.

    */

    int tea_packs;

    float price_per_pack, total_price,  taxed_price;

    cout << "Enter the total number of tea packs: " << endl;
    cin >> tea_packs;

    cout << "Enter the price of per tea pack: " << endl;
    cin >> price_per_pack;

    total_price = (tea_packs * price_per_pack);

    taxed_price = total_price + (total_price * 0.10);

    cout << "You'r final price after tax is: " << taxed_price << endl;


    return 0;   
}