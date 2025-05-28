#include<iostream>

using namespace std;

int main(){
    
    int tea_leaves = 50;

    // it provide around 7 decimal digits of accuracy.  
    float water_temperature = 85.5; 

    // it provide around 15 decimal digits of accuracy.   
    double price_of_tea = 299.99; 

    // if we change it from A to AB it will still run, but give an error warning, and use the last character, in this case B.
    char tea_drade = 'A';

    // if we give it a value like 5, or even -5 it will by default take it as true.
    bool is_ready = false; 

    cout << is_ready << endl;

    return 0;
}