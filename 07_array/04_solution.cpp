#include<iostream>

using namespace std;


int* prepareChai(int cups){

    // using heap memory -> accessed by using the "new" keyword
    // By default we use the stack memory

    int* order = new int [cups];

    for(int i = 0; i < cups; i++){

        order[i] = ((i + 1) * 10);
    }

    return order; // we are returning the memory address of the array.


}

int main(){

    int tea_cups = 5;

    int* tea_order = prepareChai(tea_cups);

    for (int i = 0; i < tea_cups; i++){
        
        cout << tea_order[i] << endl;
        
    }

    delete []tea_order;  // clearing the heap memory to prevent memory leaks 
                        // -> we use the delete keyword and the name of the variable 
    
    return 0;
}