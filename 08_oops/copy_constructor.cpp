#include<iostream>
#include<vector>
#include<string>


using namespace std;

class TeaVarity{

    public:

        string* tea_name;
        int servings;
        vector<string> ingredients;

        // parameter constructor

        TeaVarity(string name, int serving, vector<string> ingre ){

            tea_name = new string(name);
            servings = serving;
            ingredients = ingre;

            cout << "parameter constructor" << endl;

        }

        // copy constructor

        TeaVarity(const TeaVarity& other){

            tea_name = new string(*other.tea_name);
            servings = other.servings;
            ingredients = other.ingredients;

            cout << "copy constructor" << endl;

        }

        // destruction constructor
        
        ~TeaVarity(){
            delete tea_name;

            cout << "destruction constructor" << endl;

        }


        void display(){

            cout << *tea_name << "\t" << servings << endl; 

            for(string ingridient : ingredients){
                cout << ingridient << " ";
            }
            cout << endl;

        }


};


int main(){

    TeaVarity tea("masala tea",1,{"milk","water", "leaves"});

    tea.display();

    cout << "--------------------" << endl;

    TeaVarity tea_copy = tea;

    *tea_copy.tea_name = "lemon tea";

    tea_copy.display();

    cout << "--------------------" << endl;

    return 0;
}