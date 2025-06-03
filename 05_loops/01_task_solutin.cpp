#include<iostream>

using namespace std;

int main(){

    /*
    
        1. While Loop
        
        Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, 
        decrease the number of cups remaining. The loop should run until all cups are served.

    */

    int tea_cups;

    cout << "Enter the number of cups of tea: ";
    cin >> tea_cups;

    while(tea_cups > 0){

        cout << "Serving tea no " << tea_cups << endl;
        tea_cups -- ;

    }

    cout << "All tea served" << endl;

    return 0;
}