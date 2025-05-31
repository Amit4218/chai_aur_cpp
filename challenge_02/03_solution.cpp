#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge 3: Relational and Logical Operators

        A tea subscription service offers a discount if the user buys more than 12 cups or 
        if they are a member for more than a year. Write a program that checks if the user qualifies 
        for a discount based on their input.

    */

    bool is_member;
    int total_tea_cups;
    
    cout << "Are you a member for more than a year: (1 for Yes or 0 for No ) " << endl;
    cin >> is_member;
    
    cout << "Enter you'r tea cup count: " << endl;
    cin >> total_tea_cups;

    if(is_member || total_tea_cups > 12){

        cout << "You are eligible for the tea subscription discount.." << endl;

    }else{

        cout << "Sorry, you are not eligible for the subscription.." << endl;
    }

    return 0;
}