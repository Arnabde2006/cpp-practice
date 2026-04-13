// C++ Programming - LAB Assignment
// BCA 1st Year 2nd Semester
// Assignment-8: Polymorphism and Exception Handling
// Problem 1: Shape with Rectangle and Circle using pointers

#include<iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void area() {
        cout << "Area not defined for base Shape class" << endl;
    }
};

// Derived class 1: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Override area() function
    void area() override {
        float a = length * width;
        cout << "The area of rectangle is: " << a << endl;
    }
};

// Derived class 2: Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    // Override area() function
    void area() override {
        float a = 3.14159 * radius * radius;
        cout << "The area of circle is: " << a << endl;
    }
};

int main() {
    // Create pointer of type Shape (base class)
    Shape *ptr;

    // Create derived class objects
    Rectangle rect(5, 8);
    Circle circ(7);

    cout << "Demonstrating Runtime Polymorphism:" << endl;
    cout << endl;

    // Point to Rectangle object
    ptr = &rect;
    cout << "Using base class pointer to access Rectangle:" << endl;
    ptr->area();  // Calls Rectangle::area() - Runtime polymorphism

    cout << endl;

    // Point to Circle object
    ptr = &circ;
    cout << "Using base class pointer to access Circle:" << endl;
    ptr->area();  // Calls Circle::area() - Runtime polymorphism

    return 0;
}

/*
Output:
Demonstrating Runtime Polymorphism:

Using base class pointer to access Rectangle:
The area of rectangle is: 40

Using base class pointer to access Circle:
The area of circle is: 153.938

Key Concept:
- Base class pointer can point to derived class objects
- virtual keyword enables runtime polymorphism
- Correct function is called based on object type (not pointer type)
*/
