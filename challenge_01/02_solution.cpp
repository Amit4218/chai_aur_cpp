#include<iostream>
#include<string>

using namespace std;

int main(){

    float user_base_price;

    cout << "Enter a base price for Green Tea\n";

    cin >> user_base_price;

    int increase_price = (int) user_base_price * 0.1;

    cout << increase_price;

    return 0;
}