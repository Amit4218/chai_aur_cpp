#include<iostream>

using namespace std;

int chai_served(int cups[], int size ){

    int total = 0;

    for(int i = 0; i < size; i++){
        total += cups[i];
    }

    return total;

}

int main(){

    int tea_cups[5] = {10,20,30,40,50};

    cout << chai_served(tea_cups, 5) << endl; 


    return 0;
}