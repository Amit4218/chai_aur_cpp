#include<iostream>

using namespace std;

int main(){

    // 2d array

    int array[5][3] ={
        {0,1,0},
        {1,1,1},
        {0,0,1},
        {0,1,0},
        {0,0,1},


    };

    for(int i = 0; i < 5; i++){

        cout << "\n";

        for (int j = 0; j < 3; j++){

            cout << array[i][j];
            
        }
        
    }

    cout << "\n";


    return 0;
}