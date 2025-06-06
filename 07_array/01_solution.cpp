#include<iostream>

using namespace std;

int main(){

    int tea_prices[5] = {10,20,30,40,50};

    // Accessing an array values using for loop.

    for(int i = 0; i < 5; i++){

        cout << "Current Tea Prices " << tea_prices[i] << endl;
    }

    return 0;
}