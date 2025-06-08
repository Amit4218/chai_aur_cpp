#include<iostream>
#include <vector>
#include<string>

using namespace std;

class DefaultConstructor{

    public:

        string tea_name; 
        int servings;
        vector<string> ingredients;

        DefaultConstructor(){

            tea_name = "Unknown";
            servings = 1;
            ingredients = {"water","leaves","sugar"};
            cout << "Default constructur running" << endl;
        }

        void display(){

            cout << tea_name << "\n" << servings << endl;

            for (string ingredient:ingredients){

                cout << ingredient << endl;
            }
            

        }


};

int main(){

    DefaultConstructor tea;

    tea.display();


    return 0;
}