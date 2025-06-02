#include<iostream>

using namespace std;

int main(){



    /*
        Challenge 3: Nested If-Else:

        Write a program that checks the temperature of tea water input by the user:
        If the temperature is above 100°C, print "Too hot!"
        If the temperature is between 80°C and 100°C, print "Perfect temperature."
        If the temperature is below 80°C, print "Too cold!"
    
    */

    int temperature;

    cout << "Enter the temperature of the water: " << endl;
    cin >> temperature;

    if(temperature > 100){
        cout << "Too hot!" << endl;
    }
    else if (temperature <=100 && temperature >= 80){
        cout << "Pefect temperature" << endl;
    }
    else{
        cout << "Too cold!" << endl;
    }
    
    

    return 0;
}