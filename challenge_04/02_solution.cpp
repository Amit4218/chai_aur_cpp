#include<iostream>
#include<string>

using namespace std;

int main(){

    /*
    
        Challenge 2: Do-While Loop:

        Write a program that asks the user if they want to add more sugar to their tea. 
        Keep asking until they respond with "enough." Use a do-while loop for this.
    
    */

    string choice;

    do{

        cout << "Do you want more sugar : type (\"enough\") to stop : " ;
        getline(cin, choice);

    } while(choice != "enough");

    return 0;
}