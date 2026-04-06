// Assignment 1 - Problem 1.1: Factorial Calculator
// Calculate factorial of a number using class and object

#include<iostream>
using namespace std;

class Factorial {
public:
    long int fact = 1;
    int num;
    
    int input();
    void fact_function();
    void display();
};

int Factorial::input() {
    cout << "Please enter a number: ";
    cin >> num;
    return 0;
}

void Factorial::fact_function() {
    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }
}

void Factorial::display() {
    cout << "Factorial of entered number is: " << fact << endl;
}

int main() {
    Factorial object;
    object.input();
    object.fact_function();
    object.display();
    return 0;
}
