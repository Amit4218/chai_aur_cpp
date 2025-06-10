#include<iostream>
#include<vector>

using namespace std;


class Tea{

    private:

        int servings;
        string tea_name;
        vector<string> ingredients;

    public:

        Tea(){

            tea_name = "Unknown tea";
            servings = 2;
            ingredients = {"water","leaves"};

        }

        // Getter method

        string get_tea_name(){

            return tea_name;

        }

        // Setter method

        void set_tea_name(string name){

            // logic
            tea_name = name;
        }  

        // getter for ingridents

        vector<string> get_ingridents(){
            return ingredients;
        }

        // setter for ingridents

        void set_ingridents( vector<string> ingri){
            ingredients = ingri;
            cout << "done" << endl;
        }

            
        void display(){
            cout << tea_name << endl;
            cout << servings << endl;
            for(string ingredient : ingredients){
                cout << ingredient << endl;
            }
        }

};



int main(){

    Tea chai;

    chai.get_tea_name();
    chai.set_tea_name("masala tea");
    chai.get_ingridents();
    chai.set_ingridents({"water","sugar","leaves","fire"});
    chai.display();


    return 0;
}