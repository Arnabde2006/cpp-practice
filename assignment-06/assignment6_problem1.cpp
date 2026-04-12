// C++ Programming - LAB Assignment
// BCA 1st Year 2nd Semester
// Assignment-6: Parameterize and copy Constructor
// Problem 1: Car Class

#include<iostream>
#include<string>
using namespace std;

class car {
private:
    string brand;
    string model;
    int year;
    int price;

public:
    // Parameterized constructor
    car(string b, string m, int y, int p) {
        brand = b;
        model = m;
        year = y;
        price = p;
    }

    // Display function
    void display() {
        cout << brand << "\t\t" << model << "\t\t" << year << "\t\t" << price << endl;
    }
};

int main() {
    cout << "Details of car" << endl;
    cout << endl;
    cout << "Brand\t\tmodel\t\tyear\t\tprice" << endl;
    
    // Create three car objects
    car c1("BMW", "X500", 1999, 290000);
    car c2("FORD", "M230", 2002, 320000);
    car c3("TATA", "A502", 1998, 270000);
    
    // Display all cars
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}

/*
Output:
Details of car

Brand           model           year            price
BMW             X500            1999            290000
FORD            M230            2002            320000
TATA            A502            1998            270000
*/
