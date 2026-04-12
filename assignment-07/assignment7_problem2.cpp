// C++ Programming - LAB Assignment
// BCA 1st Year 2nd Semester
// Assignment No-7: [Inheritance]
// Problem 2: IT-Engineer with Multiple Inheritance

#include<iostream>
#include<string>
using namespace std;

// Base class 1: Employee
class Employee {
protected:
    string name;
    int employee_id;
    int salary;

public:
    void inputEmployee() {
        cout << "Name of the employee: ";
        getline(cin, name);
        cout << "Employee ID: ";
        cin >> employee_id;
        cout << "Salary: ";
        cin >> salary;
    }

    void displayEmployee() {
        cout << "Name of the employee: " << name << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Base class 2: Engineer
class Engineer {
protected:
    string engineering_branch;

public:
    void inputEngineer() {
        cout << "Engineering branch: ";
        cin.ignore();
        getline(cin, engineering_branch);
    }

    void displayEngineer() {
        cout << "Engineering branch: " << engineering_branch << endl;
    }
};

// Derived class using Multiple Inheritance
class IT_Engineer : public Employee, public Engineer {
private:
    string programming_language;

public:
    void inputIT_Engineer() {
        cout << "Input:" << endl;
        inputEmployee();
        inputEngineer();
        cout << "Programming Language: ";
        getline(cin, programming_language);
    }

    void displayIT_Engineer() {
        cout << "\nOutput:" << endl;
        displayEmployee();
        displayEngineer();
        cout << "Programming Language: " << programming_language << endl;
    }
};

int main() {
    IT_Engineer it_eng;
    
    cout << "Test case:" << endl;
    it_eng.inputIT_Engineer();
    it_eng.displayIT_Engineer();
    
    return 0;
}

/*
Test case:
Input:
Name of the employee: Kunal
Employee ID: 3
Salary: 55000
Engineering branch: Computer_Science
Programming Language: Python

Output:
Name of the employee: Kunal
Employee ID: 3
Salary: 55000
Engineering branch: Computer_Science
Programming Language: Python
*/
