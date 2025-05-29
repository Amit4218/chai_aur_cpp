#include<iostream>
#include<string>

using namespace std;

int main(){

    //  Question 1:
    
    /* 
    Tea Information Display Write a program that declares variables to store the type of tea, 
    its price per kilogram (float), and its rating (char). Use data types effectively and print 
    them in a formatted output using escape sequences.
    */

    // Solution :

    string tea_type = "\"Green tea\",\n";
    float price_per_kg = 299.99  ;
    char tea_rating = 'A' ;

    cout << tea_type << "is currenty priced " << price_per_kg << " rupees in kilograms,\n" << "with a rating of " << tea_rating <<"\n";

    return 0;
}