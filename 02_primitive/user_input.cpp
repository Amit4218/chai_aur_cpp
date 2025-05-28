#include<iostream>
#include<string>

using namespace std;

int main(){

    // There are different ways to take in user input, 
    // first is getline() which comes from iosteam file, which takes 2 parameters, cin and variable.
    // second we can use cin directly and point it to the variable.

    string name;
    int age;

    cout << "Hi, what is you'r name ? \n";

    getline(cin,name) ;

    cout << "What's you'r age? \n";

    cin >> age;

    cout << "Hi  "<< name << endl;


    return 0;
}