#include<iostream>
#include<vector>
#include<string>

using namespace std;


class Chai{

    public: // makes the data members and member function accessible -> by default it private (not accessable),
            // we also have -> private and protected


        //data members (attributes)

        string tea_name;
        int tea_cups;
        vector <string> ingredients;    // vector is also a array, but in vector,
                                        // it allows fast random access to any element


        //Member function

        void display(){

            cout << "Basic ingredients needed to make " << tea_name << " for " << tea_cups << " will be" << endl;

            for(string inredient:ingredients){  // we can also loop through an vector like this. other one also works.

                cout << inredient << " ";
            }
            cout << endl;
        }

};


int main(){

    Chai chaiObj; // calling the chai class

    string tea_name;
    int tea_cups;

    cout << "Enter tea name: " << endl; 
    getline(cin, tea_name);

    cout << "Enter total tea cups: " << endl;
    cin >> tea_cups;

    chaiObj.tea_name = tea_name;
    chaiObj.tea_cups = tea_cups;
    chaiObj.ingredients = {"water","tea leaves","milk", "sugar"};

    chaiObj.display();
    
    return 0;
}