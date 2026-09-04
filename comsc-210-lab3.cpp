// COMSC-210 | Lab 3 | Ahmad Dharhan

#include <iostream>
#include <string>
using namespace std;

struct Resturant
{
    string name;
    string address;
    int max_occupancy;
    float ratings;
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

    return 0;
}

Resturant struct_population(){
    Resturant temp;

    cout << "Please enter the Resturant: " << endl;
    getline(cin, temp.name);

    cout << "Please Enter The Address: " << endl;
    getline(cin, temp.address);

    cout << "Please enter the Maximum Occupancy: " << endl;
    cin >> temp.max_occupancy;

    cout << "Please enter the ratings in stars 0-5: " << endl;
    cin >> temp.ratings;

    cin.ignore();

    cout << "Please enter the name of the owner " << endl;
    getline(cin, temp.owner);

    return temp;
}

void data_display(Resturant r){
    cout << "***************************" << endl;
    cout << "      RESTAURANT DATA  " << endl;
    cout << "***************************\n" << endl;

    cout << "---------------------------" << endl;
    cout << "NAME: " << r.name << endl;
    cout << "---------------------------\n" << endl;
    
    cout << "---------------------------" << endl;
    cout << "ADDRESS: " << r.address << endl;
    cout << "---------------------------\n" << endl;

    cout << "---------------------------" << endl;
    cout << "MAX OCCUPANCY: " << r.max_occupancy << endl;
    cout << "---------------------------\n" << endl;

    cout << "---------------------------" << endl;
    cout << "RATINGS: " << r.ratings << endl;
    cout << "---------------------------\n" << endl;

    cout << "---------------------------" << endl;
    cout << "OWNER: " << r.owner << endl;
    cout << "---------------------------\n" << endl;
}