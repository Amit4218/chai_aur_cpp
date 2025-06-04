#include <iostream>

using namespace std;

int hellooChai(){
 return 10;
}

int main(){

    //  auto can be used when u don't know what type of value it will return.
    // lamda are mosytly used while making frameworks or libraries.
    
    //lamda
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(4);
    
    return 0;
}