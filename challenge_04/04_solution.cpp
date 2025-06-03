#include<iostream>
#include<string>

using namespace std;

int main(){

    /*
    
        Challenge 4: Break and Continue: 

        Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." 
        If "Herbal Tea" is encountered, skip it using continue. If "No Tea" is encountered, stop the loop using break
    
    */

    string tea_types[6] = {"Black tea","Green tea","Herbal tea","Oolong tea","No tea","Milk tea",};

    for (int i = 0; i < 5; i++){

        if(tea_types[i] == "Herbal tea"){
            continue;

        }else if (tea_types[i] == "No tea"){
            break;
        }

        cout << tea_types[i] << endl;
        
    }

    return 0;
}