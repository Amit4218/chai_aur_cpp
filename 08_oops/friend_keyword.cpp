#include<iostream>
#include<string>

using namespace std;

class Tea{

    private:

        string tea_name;
        int tea_servings;

    public:

        Tea(string name, int serving): tea_name(name),  tea_servings(serving){}

        void dispay(){

            cout << "Tea Name: " << tea_name << endl;
            cout << "Tea Serving: " << tea_servings << endl;
        }

        // friend -> keyword lets you help access private variables of a class : it can be both a function or class

        friend bool compare(const Tea &tea_1, const Tea &tea_2);

};

bool compare(const Tea &tea_1, const Tea &tea_2){
    return tea_1.tea_servings < tea_2.tea_servings;
}


int main(){

    Tea tea_1("Masala tea", 2);
    Tea tea_2("lemon tea", 6);

    tea_1.dispay();
    tea_2.dispay();

    compare(tea_1, tea_2) ?  cout << "Masala tea has more servings" << endl : cout << "Masala tea has less servings" << endl;

    return 0;
}