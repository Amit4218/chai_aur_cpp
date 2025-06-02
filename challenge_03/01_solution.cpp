#include<iostream>
#include<string>

using namespace std;

int main(){

    /*
    
    Challenge 1: If Statement:

    Write a program that asks the user for their favorite tea. If they choose "Oolong," 
    print a message saying, "You have excellent taste!"

    */

    string favourite_tea;

    cout << "Enter you'r favourite tea: " << endl;

    getline(cin, favourite_tea);

    if (favourite_tea == "Oolong"){
        
        cout << "Excellent Choice !" << endl;
    }
    


    return 0;
}