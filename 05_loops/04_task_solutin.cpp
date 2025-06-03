#include<iostream>
#include<string>

using namespace std;

int main(){


    /*
    
        4. Break Keyword

        Challenge: Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). 
        Use a break statement to exit the loop when the user types 'stop'.
    
    */

    string choice;

    while(true){

        cout << "Write (\"stop\") to not get tea served anymore: ";
        getline(cin, choice);

        if (choice == "stop"){
            cout << "\nTea won't be served anymore..." << endl;
            break;
        }

        cout << "\nServing more tea....\n" << endl;
        
    }

    return 0;
}