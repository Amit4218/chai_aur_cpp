#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge 4: Switch Case:

        Write a program that offers different tea brewing methods. The user 
        selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and
        the program prints the instructions for the selected brewing method. 
        Use a switch statement to handle the selections.

    */

    int method;

    cout << "Please select a method\n1 for Boiling,\n2 for Steeping,\n3 for Iced Tea\n" << endl;

    cin >> method;

    switch(method){
        case 1:
            cout << "Instruction for boiling tea!" << endl;
            break;
        
        case 2:
            cout << "Instruction for Steeping tea!" << endl;
            break;

        case 3:
            cout << "Instruction for Iced tea!" << endl;
            break;

        default:
            cout << "invalid choice!" << endl;
            break;
    }       


    return 0;
}