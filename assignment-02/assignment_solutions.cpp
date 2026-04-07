// ============================================================================
// C++ Programming LAB Assignment - BCA 1st Year 2nd Semester
// Assignment-2 Solutions
// ============================================================================

// ============================================================================
// PROBLEM 1: Array Sorting using Bubble Sort (Class and Object concept)
// ============================================================================
// Hints: Use bubble sort concept, where the total number of pass = number 
// of elements in the array-1 and total No of comparison in each pass = 
// No. of elements in each pass-1.

#include<iostream>
using namespace std;

class BubbleSort {
private:
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter number of elements in array: ";
        cin >> n;
        cout << "Enter array elements: " << endl;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void bubbleSort() {
        // Total passes = n-1
        for(int pass = 0; pass < n-1; pass++) {
            // Comparisons in each pass = n-pass-1
            for(int j = 0; j < n-pass-1; j++) {
                if(arr[j] > arr[j+1]) {
                    // Swap elements
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    void display() {
        cout << "Sorted array: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// ============================================================================
// PROBLEM 2: Book Information Storage and Display (Array of Objects)
// ============================================================================

class Book {
private:
    string title;
    string ISBN;
    float price;

public:
    void input() {
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter ISBN: ";
        cin >> ISBN;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "\n--- Book Information ---" << endl;
        cout << "Title: " << title << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: $" << price << endl;
    }
};

// ============================================================================
// PROBLEM 3: Employee Information (ID, Name, Salary) with Member Function Call
// ============================================================================

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

// ============================================================================
// PROBLEM 4: Shop Item Management System (Object Oriented Technology)
// ============================================================================
// A shop required to store information about each item. Information will be 
// Item name, item code, price and available quantities. User (Sales person) 
// will store information about each item and can display information about 
// each item.

class Item {
private:
    string itemName;
    int itemCode;
    float price;
    float quantityKG;

public:
    void input() {
        cout << "\nEnter details of the item:" << endl;
        cout << "Item name: ";
        cin.ignore();
        getline(cin, itemName);
        cout << "Item code: ";
        cin >> itemCode;
        cout << "Price: ";
        cin >> price;
        cout << "Quantities available in KG: ";
        cin >> quantityKG;
    }

    void display() {
        cout << "\nDetails of the item:" << endl;
        cout << "Item name: " << itemName << endl;
        cout << "Item code: " << itemCode << endl;
        cout << "Price: " << price << endl;
        cout << "Quantities available: " << quantityKG << "KG" << endl;
    }
};

// Test case for Problem 4 (as given in assignment)
void testProblem4() {
    Item item1;
    // Input: Sugar, 101, 40.00, 20
    // Output: Sugar, 101, 40.00, 20KG
    item1.input();
    item1.display();
}

// ============================================================================
// PROBLEM 5: Find Maximum and Minimum Elements from Data Set
// ============================================================================
// For different mathematical operation and decision making process, it is 
// very vital to find out maximum and minimum elements from a data set of 
// say 10 integers. At the same time security of the data set is also essential.

class DataSet {
private:
    int data[10];
    int max, min;

public:
    void input() {
        cout << "Enter 10 integer elements:" << endl;
        for(int i = 0; i < 10; i++) {
            cin >> data[i];
        }
    }

    void findMaxMin() {
        max = data[0];
        min = data[0];
        
        for(int i = 1; i < 10; i++) {
            if(data[i] > max) {
                max = data[i];
            }
            if(data[i] < min) {
                min = data[i];
            }
        }
    }

    void display() {
        cout << "\nMaximum: " << max << endl;
        cout << "Minimum: " << min << endl;
    }
};

// Test case for Problem 5 (as given in assignment)
void testProblem5() {
    DataSet ds;
    // Input: 7, 5, 4, 8, 9, 11, -5, 0, 2, 1
    // Output: Maximum: 11, Minimum: -5
    ds.input();
    ds.findMaxMin();
    ds.display();
}

// ============================================================================
// MAIN FUNCTION - Menu Driven Program
// ============================================================================

int main() {
    int choice;
    
    do {
        cout << "\n============================================" << endl;
        cout << "C++ Programming Assignment Solutions" << endl;
        cout << "============================================" << endl;
        cout << "1. Problem 1: Array Sorting (Bubble Sort)" << endl;
        cout << "2. Problem 2: Book Information" << endl;
        cout << "3. Problem 3: Employee Information" << endl;
        cout << "4. Problem 4: Shop Item Management" << endl;
        cout << "5. Problem 5: Find Max and Min from Dataset" << endl;
        cout << "0. Exit" << endl;
        cout << "============================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                BubbleSort bs;
                bs.input();
                bs.bubbleSort();
                bs.display();
                break;
            }
            case 2: {
                int n;
                cout << "How many books do you want to enter? ";
                cin >> n;
                Book books[n];
                for(int i = 0; i < n; i++) {
                    cout << "\nBook " << (i+1) << ":" << endl;
                    books[i].input();
                }
                cout << "\n--- Displaying All Books ---" << endl;
                for(int i = 0; i < n; i++) {
                    books[i].display();
                }
                break;
            }
            case 3: {
                Employee employees[3];
                for(int i = 0; i < 3; i++) {
                    cout << "\nEmployee " << (i+1) << ":" << endl;
                    employees[i].input();
                }
                cout << "\n--- Displaying All Employees ---" << endl;
                for(int i = 0; i < 3; i++) {
                    employees[i].display();
                }
                break;
            }
            case 4: {
                testProblem4();
                break;
            }
            case 5: {
                testProblem5();
                break;
            }
            case 0:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(choice != 0);
    
    return 0;
}
