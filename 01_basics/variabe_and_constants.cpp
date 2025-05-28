#include<iostream>

using namespace std;

int main(){

    cout << "hello world" << endl;

    // const variable cannot be changed once declared and initialized

    const int user_id = 123;

    // will give an error

    // user_id = 321; 

    // A variable is a named storage location in memory that holds a value of a specific data type (e.g., int, string, bool)
    
    int user_phone_number = 1234567 ; // example 1:

    string username = "Username"; // example 2:

    bool is_active = false; // example 3:

    cout << user_id << endl;
    cout << user_phone_number << endl;
    cout << username << endl;
    cout << is_active << endl;

}