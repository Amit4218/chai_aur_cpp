#include<iostream>
#include<string>

using namespace std;

int main(){

    /*
    
        5. Continue Keyword

        Challenge: Write a program that skips brewing green tea if the user dislikes it. 
        Use a continue statement to skip over green tea but brew other types of tea in a list.
    
    */

    string tea_types[4] = {"Black tea","Green tea","Oolong tea","Milk tea"};

    for(int i = 0; i < 4 ; i++ ){

        if(tea_types[i] == "Green tea"){
            continue;
        }
        
        cout << tea_types[i] << endl;
    }

    return 0;
}