#include<iostream>

using namespace std;


class Tea{

    public:

        virtual void prepare_tea() = 0; // pure virtual function
        virtual void brew_tea() = 0;    // virtual keyword is used to make a function virtual.
        virtual void serve_tea() = 0;

        void make_tea(){
            prepare_tea();
            brew_tea();
            serve_tea();
        }

};

class Green_tea : public Tea{

    public:

        void prepare_tea(){
            cout << "Hot water and tea leaves are ready" << endl;
        }

        void brew_tea(){
            cout << "Brewing Your tea.." << endl;

        }

        void serve_tea(){
            cout << "Your tea has been served" << endl;
        }

};


int main(){

    Green_tea tea;

    tea.make_tea();

    return 0;
}