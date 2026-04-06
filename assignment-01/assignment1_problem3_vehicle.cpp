// Assignment 1 - Problem 1.3: Vehicle Information System
// Store and display vehicle information using class and object

#include<iostream>
using namespace std;

class Vehicle {
public:  // Access specifier
    int modelno;
    string vehicletype;
    int capacity;
};

int main() {
    Vehicle bus;  // Create an object of vehicle
    Vehicle car;

    // Access attributes and set values
    bus.modelno = 15;
    bus.vehicletype = "public service";
    bus.capacity = 48;
    
    car.modelno = 25;
    car.vehicletype = "personal service";
    car.capacity = 6;

    // Print attribute values
    cout << "Details of Object 1:" << endl;
    cout << bus.modelno << endl;
    cout << bus.vehicletype << endl;
    cout << bus.capacity << endl;
    
    cout << "Details of Object 2:" << endl;
    cout << car.modelno << endl;
    cout << car.vehicletype << endl;
    cout << car.capacity << endl;
    
    return 0;
}
