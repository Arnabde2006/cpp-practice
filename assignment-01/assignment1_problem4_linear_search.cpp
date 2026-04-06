// Assignment 1 - Problem 1.4: Search Element in Array (Linear Search)
// Search for an element in array using class and object

#include<iostream>
using namespace std;

class SearchElement {
public:
    int arr[10] = {7, 5, 4, 8, 9, 11, 5, 0, 2, 1};
    int i, num, index, n;

    void search() {
        cout << "\nEnter a Number to Search: ";
        cin >> num;
        
        for(i = 0; i < 10; i++) {
            if(arr[i] == num) {
                index = i;
                break;
            }
        }
    }

    void display() {
        cout << "\nFound at Index No. " << index + 1 << endl;
    }
};

int main() {
    SearchElement ob1;
    ob1.search();
    ob1.display();
    return 0;
}
