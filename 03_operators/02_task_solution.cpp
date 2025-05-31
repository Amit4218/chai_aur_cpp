#include<iostream>

using namespace std;

int main(){

    /*
        Challenge: Write a program that allows a user to input the number of tea bags they have.
        Assign additional bags to them based on certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra).
        Update the original number using assignment operators.
    */

    int unsigned tea_bags;

    cout << "Enter the total tea bags you have: ";
    cin >> tea_bags;

    if (tea_bags < 10){

        tea_bags += 5;

    }

    cout << "You are all set : " << tea_bags << endl;
    
    return 0;
}