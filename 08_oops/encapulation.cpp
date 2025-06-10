#include<iostream>

using namespace std;    

class Bank{

    private:

        int account_number;
        double balance;

    public:

        Bank(int acc_number, double initial_balance){

            account_number = acc_number;
            balance = initial_balance;
        }

        // getter to get the balance

        double get_balance () const{
            return balance;
        }

        // deposit money

        void deposit(double amount){

            if(amount > 0){
                balance += amount;
            }
            else{

                cout << "Invalid Amount !" << endl;
            }
        }

        // widthdraw money

        void widthdraw(int amount){

            if(amount > 0 && amount <= balance){
                balance -= amount;
            }else{
                cout << "Insuffient Balance !" << endl;
            }

        }


};


int main(){

    Bank my_bank(1234567,6969);

    cout << my_bank.get_balance() << endl;
    my_bank.widthdraw(969);
    cout << my_bank.get_balance() << endl;
    my_bank.deposit(99);
    cout << my_bank.get_balance() << endl;

    return 0;
}   