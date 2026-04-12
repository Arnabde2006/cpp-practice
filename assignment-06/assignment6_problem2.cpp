// C++ Programming - LAB Assignment
// BCA 1st Year 2nd Semester
// Assignment-6: Parameterize and copy Constructor
// Problem 2: Factorial using Copy Constructor

#include<iostream>
using namespace std;

class Factorial {
private:
    int n;
    long int fact;

public:
    // Default constructor
    Factorial() {
        n = 0;
        fact = 1;
    }

    // Parameterized constructor
    Factorial(int num) {
        n = num;
        fact = 1;
        calculate();
    }

    // Copy constructor
    Factorial(const Factorial &obj) {
        n = obj.n;
        fact = obj.fact;
        cout << "Printing from copy constructor:" << endl;
        cout << "Factorial of " << n << " is " << fact << endl;
    }

    // Calculate factorial
    void calculate() {
        fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
    }

    // Display function
    void display() {
        cout << "Factorial of " << n << " is " << fact << endl;
    }
};

int main() {
    int num;
    
    cout << "Test case:" << endl;
    cout << "Enter the number to find factorial: ";
    cin >> num;
    
    // Create object using parameterized constructor
    Factorial f1(num);
    
    cout << "Printing from constructor:" << endl;
    f1.display();
    
    // Create object using copy constructor
    Factorial f2 = f1;
    
    return 0;
}

/*
Test case:
Enter the number to find factorial: 5
Printing from constructor:
Factorial of 5 is 120
Printing from copy constructor:
Factorial of 5 is 120
*/
