// Problem 5: For different mathematical operation and decision making process, 
// it is very vital to find out maximum and minimum elements from a data set 
// of say 10 integers. At the same time security of the data set is also 
// essential. Keeping above all in mind, develop an application which 
// facilitate search of maximum and minimum element from a 10-element integer 
// data set using object oriented design concept.

#include<iostream>
using namespace std;

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

int main() {
    DataSet ds;
    
    // Test case as given in assignment:
    // Input: Enter 10 integer elements:
    //        7, 5, 4, 8, 9, 11, -5, 0, 2, 1
    
    ds.input();
    ds.findMaxMin();
    ds.display();
    
    return 0;
}

/* Expected Output:
Maximum: 11
Minimum: -5
*/
