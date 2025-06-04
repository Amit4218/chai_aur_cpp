#include <iostream>

using namespace std;

int globalChaiStock = 100; // can be accessed by any function because its declared globally


void pourChai(int &cups){

    // using & with parameter will also change the value of the varibale
    // if & is not user only a copy of the varible changes

    int test = 9;
    cups = cups + 5;
    
    cout << "Poured cups: " << cups << endl;
}



int main(){
    
    int cups = 2;
    pourChai(cups);
    cout << "Total cups are " << cups << endl;
    return 0;
}