#include<iostream>

using namespace std;

int main(){

    float tea_price = 49.99;

    // This will convert the float to integer but we will lose our precision.

    int rounded_price = (int) tea_price;

    // int rounded_price = (short) tea_price;  // This is a common mistake, when type-Casting.

    
    // here again we will lose precision, because we are holding the total_price in int,
    // where as if we had used double or float, that would not be the case.

    int tea_quantity = 2;
    int total_price = tea_price * tea_quantity;

    cout << total_price << endl;



    return 0;
}