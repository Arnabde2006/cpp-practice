# C++ Programming LAB Assignment 1 Solutions
## BCA 1st Year 2nd Semester

---

## Assignment Overview

This repository contains solutions to 5 C++ programming problems from Assignment 1, focusing on fundamental programming concepts with Object-Oriented Programming (OOP):
- Classes and Objects
- Loops and Conditionals
- Arrays
- Searching Algorithms
- Mathematical Operations

---

## Problem 1.1: Factorial Calculator

**Problem Statement:**
Write a C++ program to calculate the factorial of a number using class and object concept.

**Solution Overview:**
```cpp
class Factorial {
public:
    long int fact = 1;
    int num;
    int input();
    void fact_function();
    void display();
};
```

**Example:**
```
Input: 5
Output: Factorial of entered number is: 120
```

**Algorithm:**
1. Input a number
2. Initialize factorial = 1
3. Loop from 1 to n and multiply factorial by each number
4. Display the result

**Formula:** n! = n × (n-1) × (n-2) × ... × 2 × 1

---

## Problem 1.2: Find Maximum and Minimum in Array

**Problem Statement:**
Find the maximum and minimum elements from an array using class and object concept.

**Solution Overview:**
```cpp
class Array {
private:
    int a[10], max, min, n;
public:
    void input();
    void maximum();
    void minimum();
    void print();
};
```

**Example:**
```
Input: 
  Number of elements: 5
  Array: 7, 5, 4, 8, 9

Output:
  Array is: 7 5 4 8 9
  Maximum no is: 9
  Minimum no is: 4
```

**Algorithm:**
1. Input array elements
2. Initialize max and min with first element
3. Traverse array and update max/min
4. Display results

**Time Complexity:** O(n)

---

## Problem 1.3: Vehicle Information System

**Problem Statement:**
Store and display information about vehicles using class and object concept.

**Solution Overview:**
```cpp
class Vehicle {
public:
    int modelno;
    string vehicletype;
    int capacity;
};
```

**Example:**
```
Bus Object:
  Model No: 15
  Vehicle Type: public service
  Capacity: 48

Car Object:
  Model No: 25
  Vehicle Type: personal service
  Capacity: 6
```

**Key Concepts:**
- Public access specifier
- Direct attribute access
- Multiple objects of same class
- Object initialization

---

## Problem 1.4: Linear Search in Array

**Problem Statement:**
Search for an element in an array using linear search algorithm with class and object concept.

**Solution Overview:**
```cpp
class SearchElement {
public:
    int arr[10] = {7, 5, 4, 8, 9, 11, 5, 0, 2, 1};
    int num, index;
    void search();
    void display();
};
```

**Predefined Array:** {7, 5, 4, 8, 9, 11, 5, 0, 2, 1}

**Example:**
```
Input: Search for 8
Output: Found at Position: 4
```

**Algorithm:**
1. Input search element
2. Traverse array from start
3. Compare each element with search key
4. Return position if found, else not found
5. Display result

**Time Complexity:** O(n)
**Space Complexity:** O(1)

---

## Problem 1.5: Binary Search in Sorted Array

**Problem Statement:**
Search for an element in a sorted array using binary search algorithm.

**Solution Overview:**
```cpp
class Array {
private:
    int a[7] = {10, 19, 27, 30, 35, 67, 80};
    int st, tgt, end, mid;
public:
    void search();
};
```

**Predefined Sorted Array:** {10, 19, 27, 30, 35, 67, 80}

**Example:**
```
Input: Search for 30
Output: Element is found at position 4
```

**Algorithm:**
1. Set start = 0, end = array_length - 1
2. While start <= end:
   - Calculate mid = (start + end) / 2
   - If target == array[mid], element found
   - If target > array[mid], search right half (start = mid + 1)
   - If target < array[mid], search left half (end = mid - 1)
3. If not found, display message

**Time Complexity:** O(log n)
**Space Complexity:** O(1)

**Note:** Binary search only works on sorted arrays!

---

## How to Compile and Run

### For Individual Problems:

```bash
# Problem 1.1: Factorial
g++ assignment1_problem1_factorial.cpp -o factorial
./factorial

# Problem 1.2: Max and Min
g++ assignment1_problem2_max_min.cpp -o maxmin
./maxmin

# Problem 1.3: Vehicle Info
g++ assignment1_problem3_vehicle.cpp -o vehicle
./vehicle

# Problem 1.4: Linear Search
g++ assignment1_problem4_linear_search.cpp -o linear
./linear

# Problem 1.5: Binary Search
g++ assignment1_problem5_binary_search.cpp -o binary
./binary
```

### For Complete Menu-Driven Program:

```bash
g++ assignment1_complete.cpp -o assignment1
./assignment1
```

---

## Comparison: Linear Search vs Binary Search

| Feature | Linear Search | Binary Search |
|---------|--------------|---------------|
| **Works on** | Any array | Only sorted arrays |
| **Time Complexity** | O(n) | O(log n) |
| **Best for** | Small/unsorted data | Large sorted data |
| **Implementation** | Simple | Moderate |
| **Performance** | Slower for large data | Much faster |

**Example:** Searching in 1000 elements
- Linear Search: Up to 1000 comparisons
- Binary Search: Maximum 10 comparisons

---

## Key OOP Concepts Demonstrated

1. **Encapsulation**: Data and methods bundled in classes

2. **Data Members**: Variables that store object's state

3. **Member Functions**: Functions that operate on object's data

4. **Public Access**: Members accessible from outside the class

5. **Private Access**: Members hidden from outside access

6. **Objects**: Instances of a class

7. **Class**: Blueprint for creating objects

---

## Learning Outcomes

After completing Assignment 1, students will understand:
- Basic class and object concepts
- Implementing algorithms with OOP
- Array manipulation
- Searching techniques
- Factorial calculation
- Finding maximum and minimum values
- Difference between linear and binary search
- When to use which search algorithm

---

## Algorithm Complexity Summary

| Problem | Time Complexity | Space Complexity |
|---------|----------------|------------------|
| Factorial | O(n) | O(1) |
| Max/Min | O(n) | O(1) |
| Vehicle Info | O(1) | O(1) |
| Linear Search | O(n) | O(1) |
| Binary Search | O(log n) | O(1) |

---

## Common Mistakes to Avoid

1. **Factorial overflow**: Use `long int` for large factorials
2. **Array bounds**: Always check array limits
3. **Binary search on unsorted array**: Will give wrong results
4. **Division by zero**: Handle edge cases
5. **Uninitialized variables**: Always initialize variables

---

## Extensions and Improvements

These programs can be enhanced with:
- Input validation
- Error handling
- Dynamic array size
- Menu-driven interface
- File input/output
- Exception handling
- Template classes
- STL containers

---

## Course Information

**Course:** BCA 1st Year 2nd Semester
**Subject:** C++ Programming - LAB Assignment 1
**Institution:** Institute of Engineering & Management

---

## References

- C++ Programming Language by Bjarne Stroustrup
- Object-Oriented Programming with C++ by E Balagurusamy
- Data Structures and Algorithms by Cormen et al.

---

## License

These solutions are provided for educational purposes.
