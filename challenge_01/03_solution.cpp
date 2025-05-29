#include<iostream>
#include<string>

using namespace std;

int main(){

    // Question 3:

    /*
    Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline
    and also asks how many cups of tea they want using cin. Display the result in a fun message.
    */

    // Solution 3:

    string favourite_tea;
    int total_cups;

    cout << "What's you'r favourite tea? \n";

    getline(cin, favourite_tea);

    cout << "How many cups of " << favourite_tea << " would you like to have? \n";

    cin >> total_cups;

    cout << total_cups << " of " << favourite_tea << " is on the way...\n"; 

    return 0;
}