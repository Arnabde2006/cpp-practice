// Problem 4: A shop required to store information about each item. 
// Information will be Item name, item code, price and available quantities. 
// User (Sales person) will store information about each item and can display 
// information about each item. Model the above problem with object oriented 
// technology.

#include<iostream>
using namespace std;

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

int main() {
    Item item1;
    
    // Test case as given in assignment:
    // Input: Item name: Sugar
    //        Item code: 101
    //        Price: 40.00
    //        Quantities available in KG: 20
    
    item1.input();
    item1.display();
    
    return 0;
}

/* Expected Output:
Details of the item:
Item name: Sugar
Item code: 101
Price: 40.00
Quantities available: 20KG
*/
