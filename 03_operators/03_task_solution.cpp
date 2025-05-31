#include<iostream>

using namespace std;

int main(){

    /*
    
        Challenge: A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea
        get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. 

    */

    int tea_cups;

    cout << "Enter you'r total numbers of tea cups till now : ";
    cin >> tea_cups;

    if (tea_cups > 20)
    {
        cout << "congratulations you earned the \"Golden\" tea badge 🏆️ " << endl;

    }else if (tea_cups >= 10 && tea_cups <= 20 ){
        cout << "congratulations you earned the \"silver\" tea badge 🥈 " << endl;
    }
    else{

        cout << "Drink more tea to earn badge..." << endl;

    }
    

    return 0;
}