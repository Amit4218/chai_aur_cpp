#include<iostream>


class Tea{

    protected:

       std::string tea_name;
       int servings;

    public: 

        Tea(std::string name, int serve ):tea_name(name), servings(serve){
            std::cout << "Tea constructor called " << tea_name << std::endl;
        };

        virtual void brew() const {
            std::cout << "brewing your tea" << std::endl; 
        }

        virtual void serve() const {
            std::cout << "serving your tea" << std::endl; 
        }

        ~Tea(){
            std::cout << "Tea destructor called for " << tea_name << std::endl;
        }

};

class GreenTea :public Tea{

    public: 

    GreenTea(int serve):Tea("Green tea", serve){

        std::cout << "GreenTea Green tea called" << std::endl;

        }

        void brew() const override {

            std::cout << "GreenTea brewing your tea" << std::endl; 
        } 

        ~GreenTea(){
            std::cout << "GreenTea destructor called" << std::endl;
        }

};

class MasalaTea : public Tea {

    public: 

        MasalaTea(int serve) : Tea("Masala tea", serve){
            std::cout << "MasalaTea Consttructor Green" << std::endl;
        }

        void brew() const override{
            std::cout << "MasalaTea brewing your tea" << std::endl; 
        }

        // The final keyword will make this the final function -> which mean this cannot
        // be override again, if the Masala tea class is inherited by any other calss

        void serve() const override final{
            std::cout << "brewing your tea" << std::endl; 

        }

        ~MasalaTea(){
            std::cout << "MasalaTea destructor called" << std::endl;
        }

};


int main(){

    Tea* tea1 = new GreenTea(3);
    Tea* tea2 = new MasalaTea(4);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}