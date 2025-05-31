#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge: Create a program that checks if a user is eligible for a tea subscription discount.
        The discount applies if the user is either a student or has purchased more than 15 cups. 
        Ask the user to input their status (student or not) and their cup count.

    */

    char is_student;
    int total_tea_cups;
    
    cout << "Are you a student ? Y (yes) or N (no) : " << endl;
    cin >> is_student;
    
    cout << "Enter you'r tea cup count: " << endl;
    cin >> total_tea_cups;

    if(is_student == 'Y' || total_tea_cups >= 15){

        cout << "You are eligible for the tea subscription discount.." << endl;

    }else{

        cout << "Sorry, you are not eligible for the subscription.." << endl;
    }

    return 0;
}