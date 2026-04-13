// C++ Programming - LAB Assignment
// BCA 1st Year 2nd Semester
// Assignment-8: Polymorphism and Exception Handling
// Problem 3: Multiple Exception Types (integer, float, character)

#include<iostream>
using namespace std;

class ExceptionDemo {
public:
    void checkValue(int value) {
        try {
            if(value == 0) {
                throw value;  // Throw integer exception
            }
            else if(value == 1) {
                throw 1.0f;  // Throw float exception
            }
            else if(value == -1) {
                throw 'c';  // Throw character exception
            }
            else {
                cout << "No exception for value: " << value << endl;
            }
        }
        catch(int e) {
            cout << "Integer exception caught." << endl;
        }
        catch(float e) {
            cout << "Float exception caught." << endl;
        }
        catch(char e) {
            cout << "Character exception caught." << endl;
        }
    }
};

int main() {
    ExceptionDemo demo;

    cout << "Test case-1:" << endl;
    cout << "Input:" << endl;
    cout << "Enter value: 0" << endl;
    cout << "Output:" << endl;
    demo.checkValue(0);

    cout << endl;

    cout << "Test case-2:" << endl;
    cout << "Input:" << endl;
    cout << "Enter value: -1" << endl;
    cout << "Output:" << endl;
    demo.checkValue(-1);

    return 0;
}

/*
Test case-1:
Input:
Enter value: 0
Output:
Integer exception caught.

Test case-2:
Input:
Enter value: -1
Output:
Character exception caught.

Key Concepts:
- Multiple catch blocks for different exception types
- Exception is thrown based on condition
- Appropriate catch block handles the exception
- Only one catch block executes per exception
*/
