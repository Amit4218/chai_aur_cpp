#include<iostream>
#include<string>

using namespace std;

string greet_user(string name){

    return "Hello " + name;
    
}

void hello_world(){

    cout << "Did you know,\nHello world!, is the first line of text most of the begginer programmer print? " << endl;
}

int add(int a, int b){
    return a + b;
}

int main(){

    cout  << greet_user("amit") << endl;
    hello_world();
    cout << add(35,34) << endl;

    return 0;
}

 