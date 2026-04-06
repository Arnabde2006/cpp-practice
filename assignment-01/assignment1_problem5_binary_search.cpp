// Assignment 1 - Problem 1.5: Binary Search in Sorted Array
// Search for an element using binary search algorithm

#include<iostream>
using namespace std;

class Array {
private:
    int a[7] = {10, 19, 27, 30, 35, 67, 80};
    int st, tgt, end, mid, i, n;

public:
    void search() {
        st = 0;
        end = 6;
        
        cout << "Enter Search Item: " << endl;
        cin >> tgt;
        
        while(st <= end) {
            mid = (st + end) / 2;
            
            if(a[mid] == tgt) {
                cout << "Element is found at index " << (mid + 1) << endl;
                exit(0);  // use for exit the program
            }
            else if(tgt > a[mid]) {
                st = mid + 1;
            }
            else if(tgt < a[mid]) {
                end = mid - 1;
            }
        }
        
        cout << "Element not found in array" << endl;
    }
};

int main() {
    Array obj;
    obj.search();
    return 0;
}
