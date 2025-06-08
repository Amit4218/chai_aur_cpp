#include<iostream>
#include<vector>
#include<string>

using namespace std;

class TeaVarity{

    public:

        string tea_name;
        int serving;
        vector<string> ingredients;

        TeaVarity(string name, int serving, vector<string> ingredients){

            cout << "parameter Constructor called" << endl;
            tea_name = name;
            serving = serving;
            ingredients = ingredients;
            
        }

        void display(){

            cout << "Basic ingredients needed to make " << tea_name << " for " << serving << " will be" << endl;

            for(string inredient:ingredients){  
                cout << inredient << " ";
            }
            cout << endl;
        }


};

int main(){

    TeaVarity tea("masala chai", 1, {"milk","water"});

    
    return 0;
}