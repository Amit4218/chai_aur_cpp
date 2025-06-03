#include<iostream>
#include<string>

using namespace std;

int main(){

    /*
    
        6. Nested Loops

        Challenge: Write a program that brews multiple cups of different types of tea. 
        For each type of tea, brew 3 cups using a nested loop.

    */

    string tea_types[4] = {"Black tea","Green tea","Oolong tea","Milk tea"};

    for(int i = 0; i < 4; i++){

        cout << tea_types[i] << endl;

        for(int j = 0; j < 3 ; j++){

            cout << "Brewing " << tea_types[i] << endl;
        }

    }


    return 0;
}