// Problem 3: Store and display the detail information (ID, Name and Salary) 
// of three different employees. The input values will be passes when the 
// objects call a member function.

#include<iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee employees[3];
    
    for(int i = 0; i < 3; i++) {
        cout << "\nEmployee " << (i+1) << ":" << endl;
        employees[i].input();
    }
    
    cout << "\n--- Displaying All Employees ---" << endl;
    for(int i = 0; i < 3; i++) {
        employees[i].display();
    }
    
    return 0;
}
