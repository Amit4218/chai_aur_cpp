#include<iostream>

using namespace std;

int main(){

    /*
    
        3. For Loop

        Challenge: Write a program that prints the brewing instructions for making 5 cups of tea. 
        The brewing process should be printed once for each cup using a for loop.
    
    */

    int tea_cups;

    cout << "Enter the cups of tea : ";
    cin >> tea_cups;

    for(int i = 0; i <= tea_cups; i++){

        cout << "Instuction for brewing tea no " << i << endl;
    }

    cout << "Brewing completed" << endl;

    return 0;
}