#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge 5: Nested Loops:

        Write a program that displays a tea brewing schedule. For each day of the week (outer loop),
        brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).

    */

    int week_day = 7;

    for (int i = 0; i < 7; i++){

        for (int j = 0; j < 2; j++){

            cout << "Brewing tea for break fast " << j << endl;
        }

        for (int k = 0; k < 2; k++){

            cout << "Brewing tea for lunch " << k << endl;
        }

        for (int l = 0; l < 2; l++){

            cout << "Brewing tea for dinner " << l << endl;
        }
        
        
    }

    return 0;
}