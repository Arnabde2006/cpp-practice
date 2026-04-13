// C++ Programming - LAB Assignment
// BCA 1st Year 2nd Semester
// Assignment-8: Polymorphism and Exception Handling
// Problem 2: Formula a/(b-c) with Exception Handling

#include<iostream>
using namespace std;

class Division {
private:
    int a, b, c;
    float result;

public:
    void input() {
        cout << "Enter values of a: ";
        cin >> a;
        cout << "Enter values of a: ";  // PDF says "a" for all three
        cin >> b;
        cout << "Enter values of a: ";
        cin >> c;
    }

    void calculate() {
        try {
            int denominator = b - c;
            
            if(denominator == 0) {
                throw "Division by zero";
            }
            
            result = (float)a / denominator;
            cout << "Result = " << result << endl;
        }
        catch(const char* msg) {
            cout << "Exception occurs! " << msg << endl;
        }
    }
};

int main() {
    Division d;

    cout << "Test case-1:" << endl;
    cout << "Input:" << endl;
    d.input();
    
    cout << endl << "Output:" << endl;
    d.calculate();

    return 0;
}

/*
Test case-1:
Input:
Enter values of a: 1
Enter values of a: 2
Enter values of a: 3

Output:
Result = -1

Test case-2:
Input:
Enter values of a: 1
Enter values of a: 2
Enter values of a: 2

Output:
Exception occurs! Division by zero
*/
