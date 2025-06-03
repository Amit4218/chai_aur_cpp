#include <iostream>
#include <string>

using namespace std;

int main(){

    /*
    
        2. Do-While Loop

        Challenge: Create a program that asks the user if they want more tea. Keep asking them until they 
        type "no" (case-insensitive), using a do-while loop.
    
    */

    string choice;

    do{
        cout << "Do you want more tea ? (no/yes) : \n";
        getline(cin, choice);

        cout << "serving more tea..\n" << endl;

    } while(choice != "no");

    cout << "not serving tea anymore..\n" << endl;

    return 0;
}