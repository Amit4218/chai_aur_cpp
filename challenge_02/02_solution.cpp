#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge 2: Assignment Operators

        Create a program where the user inputs the number of tea bags they have. 
        If the number is less than 20, give them 10 extra bags using the += assignment operator. 
        Display the updated total.
    
    */

    int tea_bags;

    cout << "Enter the total number of tea bags you have: " << endl;
    cin >> tea_bags;

    if(tea_bags < 20){
        tea_bags += 10;
    }

    cout << "Total number of tea bags:  " << tea_bags << endl; 

    return 0;
}