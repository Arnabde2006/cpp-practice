# C++ Programming LAB Assignment Solutions
## BCA 1st Year 2nd Semester - Assignment-2

---

## Assignment Overview

This repository contains solutions to 5 C++ programming problems focusing on Object-Oriented Programming (OOP) concepts including:
- Classes and Objects
- Array of Objects
- Member Functions
- Data Encapsulation
- Access Specifiers (public/private)

---

## Problem 1: Array Sorting using Bubble Sort

**Problem Statement:**
Write a C++ program to sort the elements of an array using the concept of class and object.

**Hints:** 
- Use bubble sort concept
- Total number of pass = number of elements in array - 1
- Total number of comparisons in each pass = number of elements in each pass - 1

**Solution Approach:**
```cpp
class BubbleSort {
private:
    int arr[100];
    int n;
public:
    void input();      // Input array elements
    void bubbleSort(); // Sort using bubble sort algorithm
    void display();    // Display sorted array
};
```

**Algorithm:**
1. Input array size and elements
2. For each pass (n-1 passes):
   - Compare adjacent elements
   - Swap if they are in wrong order
3. Display sorted array

**Time Complexity:** O(n²)
**Space Complexity:** O(1)

---

## Problem 2: Book Information Storage

**Problem Statement:**
Write a C++ program to store and display book information (title, ISBN, price etc.) using array of object concept.

**Solution Approach:**
```cpp
class Book {
private:
    string title;
    string ISBN;
    float price;
public:
    void input();   // Input book details
    void display(); // Display book information
};
```

**Key Concepts:**
- Array of objects: `Book books[n];`
- Each object stores complete information about one book
- Demonstrates data encapsulation

---

## Problem 3: Employee Information Management

**Problem Statement:**
Store and display the detail information (ID, Name and Salary) of three different employees. The input values will be passed when the objects call a member function.

**Solution Approach:**
```cpp
class Employee {
private:
    int id;
    string name;
    float salary;
public:
    void input();   // Called by object to input data
    void display(); // Display employee details
};
```

**Key Features:**
- Fixed number of employees (3)
- Member function call mechanism
- Private data members with public interface

---

## Problem 4: Shop Item Management System

**Problem Statement:**
A shop requires storing information about each item:
- Item name
- Item code
- Price
- Available quantities

User (Sales person) will store and display information about each item using object-oriented technology.

**Test Case:**
```
Input:
  Item name: Sugar
  Item code: 101
  Price: 40.00
  Quantities available in KG: 20

Output:
  Details of the item:
  Item name: Sugar
  Item code: 101
  Price: 40.00
  Quantities available: 20KG
```

**Solution Approach:**
```cpp
class Item {
private:
    string itemName;
    int itemCode;
    float price;
    float quantityKG;
public:
    void input();
    void display();
};
```

---

## Problem 5: Find Maximum and Minimum Elements

**Problem Statement:**
For different mathematical operations and decision-making processes, it is vital to find maximum and minimum elements from a data set of 10 integers. The security of the data set is also essential.

Develop an application using object-oriented design concept to facilitate search of maximum and minimum elements from a 10-element integer data set.

**Test Case:**
```
Input:
  Enter 10 integer elements:
  7, 5, 4, 8, 9, 11, -5, 0, 2, 1

Output:
  Maximum: 11
  Minimum: -5
```

**Solution Approach:**
```cpp
class DataSet {
private:
    int data[10];  // Private for security
    int max, min;
public:
    void input();
    void findMaxMin();
    void display();
};
```

**Algorithm:**
1. Initialize max and min with first element
2. Iterate through array from index 1
3. Update max if current element is greater
4. Update min if current element is smaller
5. Display results

**Time Complexity:** O(n)
**Space Complexity:** O(1)

---

## How to Compile and Run

### For Individual Problems:

```bash
# Problem 1: Bubble Sort
g++ problem1_bubble_sort.cpp -o problem1
./problem1

# Problem 2: Book Information
g++ problem2_book_info.cpp -o problem2
./problem2

# Problem 3: Employee Information
g++ problem3_employee_info.cpp -o problem3
./problem3

# Problem 4: Shop Item Management
g++ problem4_shop_item.cpp -o problem4
./problem4

# Problem 5: Max and Min Finder
g++ problem5_max_min.cpp -o problem5
./problem5
```

### For Combined Menu-Driven Program:

```bash
g++ assignment_solutions.cpp -o assignment
./assignment
```

---

## Key OOP Concepts Demonstrated

1. **Encapsulation**: Data members are kept private and accessed through public member functions

2. **Abstraction**: Complex logic is hidden inside classes, users interact through simple interfaces

3. **Data Security**: Private data members cannot be accessed directly from outside the class

4. **Array of Objects**: Multiple objects of the same class type stored in an array

5. **Member Functions**: Functions that operate on object's data

6. **Class and Object**: Blueprint (class) and instances (objects)

---

## Learning Outcomes

After completing this assignment, students will understand:
- How to design and implement classes in C++
- Working with arrays of objects
- Data encapsulation and access control
- Sorting algorithms (Bubble Sort)
- Searching algorithms (Linear and Binary Search concepts from provided code)
- Input/output operations with objects
- Object-oriented problem solving

---

## Additional Notes

- All programs use proper naming conventions
- Code follows good programming practices
- Comments are provided for clarity
- Input validation can be added for robustness
- Programs can be extended with additional features

---

## References

- C++ Programming Language by Bjarne Stroustrup
- Object-Oriented Programming with C++ by E Balagurusamy
- Institute of Engineering & Management Course Materials

---

## Author Information

**Course:** BCA 1st Year 2nd Semester
**Subject:** C++ Programming - LAB Assignment
**Institution:** Institute of Engineering & Management

---

## License

These solutions are provided for educational purposes.
