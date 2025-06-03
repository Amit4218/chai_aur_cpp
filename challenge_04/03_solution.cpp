#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge 3: For Loop:

        Create a program that prints the first 10 multiples of 2, representing the total tea bags 
        required for making batches of tea.

    */

    for(int i = 1; i < 11; i++ ){
        cout << "2 x " << i << " = " << 2*i << endl;
    }

    return 0;
}