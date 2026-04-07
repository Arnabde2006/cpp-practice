// Problem 1: Array Sorting using Bubble Sort
// Hints: Use bubble sort concept, where total number of pass = number of 
// elements in array-1 and total No of comparison in each pass = 
// No. of elements in each pass-1

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

int main() {
    BubbleSort bs;
    bs.input();
    bs.bubbleSort();
    bs.display();
    return 0;
}
