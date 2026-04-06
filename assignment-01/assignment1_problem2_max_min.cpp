// Assignment 1 - Problem 1.2: Find Maximum and Minimum in Array
// Find max and min elements from array using class and object

#include<iostream>
using namespace std;

class Array {
private:
    int a[10], max, min, i, n;

public:
    void input() {
        cout << "Enter number of elements in array: " << endl;
        cin >> n;
        cout << "Enter array elements: " << endl;
        for(i = 0; i < n; i++) {
            cin >> a[i];
        }
    }

    void maximum() {
        max = a[0];
        for(i = 1; i < n; i++) {
            if(a[i] > max) {
                max = a[i];
            }
        }
    }

    void minimum() {
        min = a[0];
        for(i = 1; i < n; i++) {
            if(a[i] < min) {
                min = a[i];
            }
        }
    }

    void print() {
        cout << "Array is: " << endl;
        for(i = 0; i < n; i++) {
            cout << a[i] << endl;
        }
        cout << "Maximum no is: " << max << endl;
        cout << "Minimum no is: " << min << endl;
    }
};

int main() {
    Array y;
    y.input();
    y.maximum();
    y.minimum();
    y.print();
    return 0;
}
