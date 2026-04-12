// C++ Programming - LAB Assignment
// BCA 1st Year 2nd Semester
// Assignment-6: Constructor Overloading
// Problem 3: Calculate area/perimeter/volume using different constructors

#include<iostream>
using namespace std;

class Rect {
private:
    float dimension1, dimension2, dimension3;
    float result1, result2;

public:
    // Constructor for Circle - takes radius
    Rect(float radius) {
        result1 = 3.14159 * radius * radius;  // Area
        result2 = 2 * 3.14159 * radius;       // Perimeter
        cout << "Area of the circle is: " << (int)result1 << endl;
        cout << "Perimeter of the circle is: " << (int)result2 << endl;
    }

    // Constructor for Rectangle - takes length and breadth
    Rect(float length, float breadth) {
        dimension1 = length;
        dimension2 = breadth;
        result1 = length * breadth;
        cout << "The area of rectangle is: " << (int)result1 << endl;
    }

    // Constructor for Cube - takes length, breadth, height
    Rect(float length, float breadth, float height) {
        dimension1 = length;
        dimension2 = breadth;
        dimension3 = height;
        result1 = length * breadth * height;
        cout << "The volume of cube is: " << (int)result1 << endl;
    }
};

int main() {
    cout << "Test case:" << endl;
    
    // Circle with radius = 7
    cout << "Circle area=7" << endl;
    Rect circle(7);
    
    cout << endl;
    
    // Rectangle with breadth=5, length=8
    cout << "Rectangle breadth and length=5, 8" << endl;
    Rect rectangle(5, 8);
    
    cout << endl;
    
    // Cube with breadth=4, height=8, length=9
    cout << "Cube breadth, height and length=4, 8, 9" << endl;
    Rect cube(4, 8, 9);
    
    return 0;
}

/*
Output:
Test case:
Circle area=7
Area of the circle is: 153
Perimeter of the circle is: 43

Rectangle breadth and length=5, 8
The area of rectangle is: 40

Cube breadth, height and length=4, 8, 9
The volume of cube is: 288
*/
