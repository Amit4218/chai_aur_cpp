#include<iostream>
#include<string>

using namespace std;

int main(){

    // Questin 2:

    /*
    Modify Tea Prices Create a program where the user inputs a base price for tea. 
    Use type casting to increase the price by 10% and display the rounded new price 
    using explicit casting.
    */

    // solution 2:

    float user_base_price;

    cout << "Enter a base price for Green Tea\n";

    cin >> user_base_price;

    float increase = user_base_price * 0.10;
    int final_price = (int)(user_base_price + increase);

    cout << "Final price after 10% increase: " << final_price << endl;

    return 0;
}