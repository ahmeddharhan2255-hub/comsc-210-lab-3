// COMSC-210 | Lab 3 | Ahmad Dharhan

#include <iostream>
#include <string>
using namespace std;

string struct_creation(struct Resturant);

void struct_display(struct Resturant);

struct Resturant
{
    string name;
    string address;
    int max_occupancy;
    int meal_options;
    string owner;


};

int main(){

    struct_population();

}


string struct_population(Resturant& temp){
    string restur_name, restur_address, restur_owner;
    int restur_occupancy, restur_meal_num;

    cout << "Please enter the name of the Resturant: " << endl;
    cin >> temp.name;

    cout << "Please Enter The Address Of The Resturant: " << endl;
    cin >> temp.address;

}