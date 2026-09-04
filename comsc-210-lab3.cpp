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

void data_display(Resturant r);

int main(){

    Resturant rest1, rest2, rest3, rest4;

    rest1 = struct_population();
    data_display(rest1);

    rest2 = struct_population();
    data_display(rest2);

    rest3 = struct_population();
    data_display(rest3);

    rest4 = struct_population();
    data_display(rest4);
}

Resturant struct_population(){
    Resturant temp;

    cout << "Please enter the Resturant: " << endl;
    getline(cin, temp.name);

    cout << "Please Enter The Address Of The Resturant: " << endl;
    getline(cin, temp.address);

    cout << "Please enter the Maximum Occupancy of the Resturant: " << endl;
    cin >> temp.max_occupancy;

    cout << "Please enter the number of meal options available; " << endl;
    cin >> temp.meal_options;

    cout << "Please enter the name of the owner " << endl;
    getline(cin, temp.owner);

    return temp;
}

void data_display(Resturant r){
    cout << "******************" << endl;
    cout << "  RESTURANT DATA  " << endl;
    cout << "******************\n" << endl;

    cout << "RESTURANT NAME: " << r.name << endl;
    cout << "------------------\n" << endl;
    
    cout << "RESTURANT ADDRESS: " << r.name << endl;
    cout << "------------------\n" << endl;

    cout << "RESTURANT MAX OCCUPANCY: " << r.name << endl;
    cout << "------------------\n" << endl;

    cout << "RESTURANT # OF OPTIONS: " << r.name << endl;
    cout << "------------------\n" << endl;

    cout << "RESTURANT OWNER: " << r.name << endl;
    cout << "------------------\n" << endl;
}