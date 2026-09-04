// COMSC-210 | Lab 3 | Ahmad Dharhan

#include <iostream>
#include <string>
using namespace std;

struct Resturant
{
    string name;
    string address;
    int max_occupancy;
    int meal_options;
    string owner;
};

Resturant struct_population();

int main(){

    Resturant temp = struct_population();
    cout << temp.name << endl;
    cout << temp.address << endl;
    cout << temp.max_occupancy << endl;
    cout << temp.meal_options << endl;
    cout << temp.owner << endl;
}

Resturant struct_population(){
    Resturant temp;

    cout << "Please enter the Resturant: " << endl;
    cin >> temp.name;

    cout << "Please Enter The Address Of The Resturant: " << endl;
    cin >> temp.address;

    cout << "Please enter the Maximum Occupancy of the Resturant: " << endl;
    cin >> temp.max_occupancy;

    cout << "Please enter the number of meal options available; " << endl;
    cin >> temp.meal_options;

    cout << "Please enter the name of the owner " << endl;
    cin >> temp.owner;

    return temp;
}